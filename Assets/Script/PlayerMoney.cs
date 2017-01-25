using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerMoney : MonoBehaviour {

	public int money;
	public Text TextMoney;

	// Use this for initialization
	void Start () {

		money = PlayerPrefs.GetInt ("karma");
		TextMoney.text = money.ToString ();

	}
	
	// Update is called once per frame
	void Update () {
	}

	public void AddMoney(int moneytoAdd){
		money += moneytoAdd;
		PlayerPrefs.SetInt ("karma", money);
		TextMoney.text = money.ToString ();
		AudioSource audio = GetComponent<AudioSource>();
		audio.Play();
	}
	public void substractMoney (int moneyToSubstract ){
		if (money - moneyToSubstract < 0) {
			money = 0;
			Debug.Log ("no hay mas dinero");
		} else {
			money -= moneyToSubstract;
		}
		TextMoney.text = money.ToString ();
		PlayerPrefs.SetInt ("karma", money);
	}
}
