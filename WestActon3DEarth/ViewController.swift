//
//  ViewController.swift
//  WestActon3DEarth
//
//  Created by Mark Abrasaldo on 5/12/21.
//

import UIKit

class ViewController: UIViewController {
    
    private var theViewC: WhirlyGlobeViewController?
    var imageLoader : MaplyQuadImageLoader? = nil

    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Create an empty globe and add it to the view
        theViewC = WhirlyGlobeViewController()
        self.view.addSubview(theViewC!.view)
        theViewC!.view.frame = self.view.bounds
        
        // Where do we get the tiles and were do we cache them?
        let cacheDir = NSSearchPathForDirectoriesInDomains(.cachesDirectory, .userDomainMask, true)[0]
        let thisCacheDir = "\(cacheDir)/stamentiles/"
        let maxZoom = Int32(16)
        let tileInfo = MaplyRemoteTileInfoNew(baseURL: "http://tile.stamen.com/terrain/{z}/{x}/{y}.png",
                                              minZoom: Int32(0),
                                              maxZoom: Int32(maxZoom))
        tileInfo.cacheDir = thisCacheDir

        // Sampling parameters define how we break down the globe
        let sampleParams = MaplySamplingParams()
        sampleParams.coordSys = MaplySphericalMercator(webStandard: ())
        sampleParams.coverPoles = true
        sampleParams.edgeMatching = true
        sampleParams.minZoom = tileInfo.minZoom
        sampleParams.maxZoom = tileInfo.maxZoom
        sampleParams.singleLevel = true

        // The Image Loader does the actual work
        imageLoader = MaplyQuadImageLoader(params: sampleParams, tileInfo: tileInfo, viewC: theViewC!)
        imageLoader!.baseDrawPriority = kMaplyImageLayerDrawPriorityDefault
        
        addPoint()
        
        addChild(theViewC!)
        theViewC!.startLocationTracking(with: self, useHeading: true, useCourse: true)
        theViewC!.changeLocationTrackingLockType(MaplyLocationLockNorthUp)
        theViewC?.height = 0.0001
    }
    
    private func addPoint() {
        let location = [
            MaplyCoordinateMakeWithDegrees(138.72395921727045, 35.36093601891445)
        ]

        let icon = UIImage(named: "marker")

        let markers = location.map { cap -> MaplyScreenMarker in
            let marker = MaplyScreenMarker()
            marker.image = icon
            marker.loc = cap
            marker.size = CGSize(width: 40, height: 40)
            return marker
        }

        theViewC?.addScreenMarkers(markers, desc: nil)
    }
}

extension ViewController: MaplyLocationTrackerDelegate {
    
    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
    }
    
    func locationManager(_ manager: CLLocationManager, didChange status: CLAuthorizationStatus) {
    }
}
