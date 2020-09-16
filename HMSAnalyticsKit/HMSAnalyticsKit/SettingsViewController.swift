//
//  SettingsViewController.swift
//  HMSAnalyticsKit
//
//  Created by Emre AYDIN on 9/16/20.
//  Copyright © 2020 Emre AYDIN. All rights reserved.
//

import UIKit
import HiAnalytics

class SettingsViewController: UIViewController {
    
    @IBOutlet var genderTextField: UITextField!
    
    @IBOutlet var ageTextField: UITextField!
    
    @IBOutlet var favoriteSportTextField: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    
    @IBAction func cancelButton(_ sender: UIButton) {
        self.dismiss(animated: true)
    }
    
    @IBAction func submitButton(_ sender: UIButton) {
        if let gender = genderTextField.text, !gender.isEmpty {
            HiAnalytics.setUserProfile("user_sex", setValue: gender)
        }
        if let age = ageTextField.text, !age.isEmpty {
            HiAnalytics.setUserProfile("user_age", setValue: age)
        }
        if let favoriteSport = favoriteSportTextField.text, !favoriteSport.isEmpty {
            HiAnalytics.setUserProfile("user_favor", setValue: favoriteSport)
        }
    }
    
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
