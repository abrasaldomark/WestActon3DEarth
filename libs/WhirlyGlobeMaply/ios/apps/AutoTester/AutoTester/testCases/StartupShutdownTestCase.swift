//
//  StartupShutdownTestCase.swift
//  AutoTester
//
//  Created by Steve Gifford on 10/29/19.
//  Copyright © 2019 mousebird consulting. All rights reserved.
//

import UIKit

class StartupShutdownTestCase: MaplyTestCase {

    override init() {
        super.init()

        self.name = "Repeated Startup/Shutdown"
        self.implementations = [.globe,.map]
    }
    
    var testCase = VectorMBTilesTestCase()
    var nav : UINavigationController? = nil
        
    override func startGlobe(_ nav: UINavigationController) {
        self.nav = nav
        globeViewController = WhirlyGlobeViewController()
        baseViewController = globeViewController
        nav.pushViewController(baseViewController!, animated: true)
        _ = baseViewController!.view
        globeViewController!.delegate = self
        // Note: Should also be adding as a child of the view controller

        self.testCase.globeViewController = globeViewController
        self.testCase.baseViewController = globeViewController
        testCase.setUpWithGlobe(globeViewController!)

        // Shut it down in a bit
        DispatchQueue.main.asyncAfter(deadline: .now() + 2.0) { [weak self] in
            if let self = self {
                self.stopGlobe()
            }
        }
    }
    
    func stopGlobe() {
//        globeViewController?.teardown()
        testCase.stop()

        // If the user backed out on their own, stop
        if let nav = self.nav {
            if (globeViewController != nil && nav.topViewController !== globeViewController) ||
               (mapViewController != nil && nav.topViewController !== mapViewController) {
                return;
            }
        }

        globeViewController?.navigationController?.popViewController(animated: true)

        // Start it back up again in a bit
        // Note: Check to see if we're still valid here
        DispatchQueue.main.asyncAfter(deadline: .now() + 0.5) { [weak self] in
            if let self = self, let nav = self.nav {
                self.startGlobe(nav)
            }
        }
    }
    
    override func startMap(_ nav: UINavigationController) {
        self.nav = nav
        mapViewController = MaplyViewController()
        baseViewController = mapViewController
        nav.pushViewController(baseViewController!, animated: true)
        _ = baseViewController!.view
        mapViewController!.delegate = self
        // Note: Should also be adding as a child of the view controller

        self.testCase.mapViewController = mapViewController
        self.testCase.baseViewController = mapViewController
        testCase.setUpWithMap(mapViewController!)
        
        // Shut it down in a bit
        DispatchQueue.main.asyncAfter(deadline: .now() + 2.0) { [weak self] in
            if let self = self {
                self.stopMap()
            }
        }
    }
    
    func stopMap() {
        //        globeViewController?.teardown()
        testCase.stop()
        
        // If the user backed out on their own, stop
        if let nav = self.nav {
            if (globeViewController != nil && nav.topViewController !== globeViewController) ||
               (mapViewController != nil && nav.topViewController !== mapViewController) {
                return;
            }
        }

        mapViewController?.navigationController?.popViewController(animated: true)
        
        // Start it back up again in a bit
        // Note: Check to see if we're still valid here
        DispatchQueue.main.asyncAfter(deadline: .now() + 0.5) { [weak self] in
            if let self = self {
                self.startMap(self.nav!)
            }
        }
    }
    
    override func stop() {
    }
}
