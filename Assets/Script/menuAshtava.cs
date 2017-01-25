using UnityEngine;
using System.Collections;

public class menuAshtava : MonoBehaviour {

	// Use this for initialization
	void Start () {
		this.transform.GetChild (0).GetComponent<unlock>().activar ("ashwon");
		this.transform.GetChild (1).GetComponent<unlock>().activar ("paduka");
		this.transform.GetChild (2).GetComponent<unlock>().activar ("ashone");
		this.transform.GetChild (3).GetComponent<unlock>().activar ("ash3q");

	}
	

}
