using UnityEngine;
using System.Collections;

public class menumedi : MonoBehaviour {

	// Use this for initialization
	void Start () {
		this.transform.GetChild (0).GetComponent<unlock>().activar ("trans");
		this.transform.GetChild (1).GetComponent<unlock>().activar ("sound");
		this.transform.GetChild (2).GetComponent<unlock>().activar ("moon");
		this.transform.GetChild (3).GetComponent<unlock>().activar ("pancha");

	
	}

}
