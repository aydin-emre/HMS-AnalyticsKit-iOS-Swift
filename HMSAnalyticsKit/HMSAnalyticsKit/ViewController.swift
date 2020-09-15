//
//  ViewController.swift
//  HMSAnalyticsKit
//
//  Created by Emre AYDIN on 9/9/20.
//  Copyright © 2020 Emre AYDIN. All rights reserved.
//

import UIKit
import HiAnalytics

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func reportEventButton(_ sender: UIButton) {
        HiAnalytics.onEvent("TestEvent", setParams: ["Q1": "A1", "Q2": "A2"])
    }
    
}

