package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test minimum conformance requirement of 1000 keys/keyValues for a ScalarInterpolator. A ScalarInterpolator linearly interpolates between 1000 intensity values ranginge from 0 to 1 along a sine curve. The result is a varying intensity of a PointLight that ranges from dark, to maximum intensity, then back to dark in a 10 second interval. </p>
 <p> Related links: <a href="../../../../Interpolators/ScalarInterpolator/keys1000.java">keys1000.java</a> source, <a href="../../../../Interpolators/ScalarInterpolator/keys1000Index.html" target="_top">keys1000 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Interpolators/ScalarInterpolator/keys1000.x3d">keys1000.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../Interpolators/ScalarInterpolator/1000keys-movie.mpg">1000keys-movie.mpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/members.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/members.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michael Kass NIST, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test minimum conformance requirement of 1000 keys/keyValues for a ScalarInterpolator. A ScalarInterpolator linearly interpolates between 1000 intensity values ranginge from 0 to 1 along a sine curve. The result is a varying intensity of a PointLight that ranges from dark, to maximum intensity, then back to dark in a 10 second interval. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ScalarInterpolator/keys1000.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ScalarInterpolator/keys1000.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Interpolators/ScalarInterpolator/../../license.html">../../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
	* @author This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.
 */

public class keys1000
{
	/** Default constructor to create this object. */
	public keys1000 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERACTIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("keys1000.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("1000keys-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test minimum conformance requirement of 1000 keys/keyValues for a ScalarInterpolator. A ScalarInterpolator linearly interpolates between 1000 intensity values ranginge from 0 to 1 along a sine curve. The result is a varying intensity of a PointLight that ranges from dark, to maximum intensity, then back to dark in a 10 second interval."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ScalarInterpolator/keys1000.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("keys1000.x3d"))
    .addChild(new NavigationInfo().setHeadlight(false).setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyColor(new MFColor(new double[] {0.2,0.2,0.2})))
    .addChild(new TimeSensor("TIME").setCycleInterval(5).setLoop(true))
    .addChild(new ScalarInterpolator("SCALAR_INTERPOLATOR").setKey(getSCALAR_INTERPOLATOR_3_18_key()).setKeyValue(getSCALAR_INTERPOLATOR_3_18_keyValue()))
    .addChild(new Group()
      .addChild(new Transform("TRANS")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Cylinder()))
        .addChild(new Transform().setTranslation(0.0,0.0,4.0)
          .addChild(new SpotLight("LIGHT").setBeamWidth(1.570796).setCutOffAngle(.785398)))))
    .addChild(new ROUTE().setFromNode("TIME").setFromField("fraction_changed").setToNode("SCALAR_INTERPOLATOR").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("SCALAR_INTERPOLATOR").setFromField("value_changed").setToNode("LIGHT").setToField("intensity")));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getSCALAR_INTERPOLATOR_3_18_key_1()
		{
			double[] value = {0.0,0.001,0.002,0.003,0.004,0.005,0.006,0.007,0.008,0.009,0.01,0.011,0.012,0.013,0.014,0.015,0.016,0.017,0.018,0.019,0.02,0.021,0.022,0.023,0.024,0.025,0.026,0.027,0.028,0.029,0.03,0.031,0.032,0.033,0.034,0.035,0.036,0.037,0.038,0.039,0.04,0.041,0.042,0.043,0.044,0.045,0.046,0.047,0.048,0.049,0.05,0.051,0.052,0.053,0.054,0.055,0.056,0.057,0.058,0.059,0.06,0.061,0.062,0.063,0.064,0.065,0.066,0.067,0.068,0.069,0.07,0.071,0.072,0.073,0.074,0.075,0.076,0.077,0.078,0.079,0.08,0.081,0.082,0.083,0.084,0.085,0.086,0.087,0.088,0.089,0.09,0.091,0.092,0.093,0.094,0.095,0.096,0.097,0.098,0.099,0.1,0.101,0.102,0.103,0.104,0.105,0.106,0.107,0.108,0.109,0.11,0.111,0.112,0.113,0.114,0.115,0.116,0.117,0.118,0.119,0.12,0.121,0.122,0.123,0.124,0.125,0.126,0.127,0.128,0.129,0.13,0.131,0.132,0.133,0.134,0.135,0.136,0.137,0.138,0.139,0.14,0.141,0.142,0.143,0.144,0.145,0.146,0.147,0.148,0.149,0.15,0.151,0.152,0.153,0.154,0.155,0.156,0.157,0.158,0.159,0.16,0.161,0.162,0.163,0.164,0.165,0.166,0.167,0.168,0.169,0.17,0.171,0.172,0.173,0.174,0.175,0.176,0.177,0.178,0.179,0.18,0.181,0.182,0.183,0.184,0.185,0.186,0.187,0.188,0.189,0.19,0.191,0.192,0.193,0.194,0.195,0.196,0.197,0.198,0.199,0.2,0.201,0.202,0.203,0.204,0.205,0.206,0.207,0.208,0.209,0.21,0.211,0.212,0.213,0.214,0.215,0.216,0.217,0.218,0.219,0.22,0.221,0.222,0.223,0.224,0.225,0.226,0.227,0.228,0.229,0.23,0.231,0.232,0.233,0.234,0.235,0.236,0.237,0.238,0.239,0.24,0.241,0.242,0.243,0.244,0.245,0.246,0.247,0.248,0.249,0.25,0.251,0.252,0.253,0.254,0.255,0.256,0.257,0.258,0.259,0.26,0.261,0.262,0.263,0.264,0.265,0.266,0.267,0.268,0.269,0.27,0.271,0.272,0.273,0.274,0.275,0.276,0.277,0.278,0.279,0.28,0.281,0.282,0.283,0.284,0.285,0.286,0.287,0.288,0.289,0.29,0.291,0.292,0.293,0.294,0.295,0.296,0.297,0.298,0.299,0.3,0.301,0.302,0.303,0.304,0.305,0.306,0.307,0.308,0.309,0.31,0.311,0.312,0.313,0.314,0.315,0.316,0.317,0.318,0.319,0.32,0.321,0.322,0.323,0.324,0.325,0.326,0.327,0.328,0.329,0.33,0.331,0.332,0.333,0.334,0.335,0.336,0.337,0.338,0.339,0.34,0.341,0.342,0.343,0.344,0.345,0.346,0.347,0.348,0.349,0.35,0.351,0.352,0.353,0.354,0.355,0.356,0.357,0.358,0.359,0.36,0.361,0.362,0.363,0.364,0.365,0.366,0.367,0.368,0.369,0.37,0.371,0.372,0.373,0.374,0.375,0.376,0.377,0.378,0.379,0.38,0.381,0.382,0.383,0.384,0.385,0.386,0.387,0.388,0.389,0.39,0.391,0.392,0.393,0.394,0.395,0.396,0.397,0.398,0.399,0.4,0.401,0.402,0.403,0.404,0.405,0.406,0.407,0.408,0.409,0.41,0.411,0.412,0.413,0.414,0.415,0.416,0.417,0.418,0.419,0.42,0.421,0.422,0.423,0.424,0.425,0.426,0.427,0.428,0.429,0.43,0.431,0.432,0.433,0.434,0.435,0.436,0.437,0.438,0.439,0.44,0.441,0.442,0.443,0.444,0.445,0.446,0.447,0.448,0.449,0.45,0.451,0.452,0.453,0.454,0.455,0.456,0.457,0.458,0.459,0.46,0.461,0.462,0.463,0.464,0.465,0.466,0.467,0.468,0.469,0.47,0.471,0.472,0.473,0.474,0.475,0.476,0.477,0.478,0.479,0.48,0.481,0.482,0.483,0.484,0.485,0.486,0.487,0.488,0.489,0.49,0.491,0.492,0.493,0.494,0.495,0.496,0.497,0.498,0.499,0.5,0.501,0.502,0.503,0.504,0.505,0.506,0.507,0.508,0.509,0.51,0.511,0.512,0.513,0.514,0.515,0.516,0.517,0.518,0.519,0.52,0.521,0.522,0.523,0.524,0.525,0.526,0.527,0.528,0.529,0.53,0.531,0.532,0.533,0.534,0.535,0.536,0.537,0.538,0.539,0.54,0.541,0.542,0.543,0.544,0.545,0.546,0.547,0.548,0.549,0.55,0.551,0.552,0.553,0.554,0.555,0.556,0.557,0.558,0.559,0.56,0.561,0.562,0.563,0.564,0.565,0.566,0.567,0.568,0.569,0.57,0.571,0.572,0.573,0.574,0.575,0.576,0.577,0.578,0.579,0.58,0.581,0.582,0.583,0.584,0.585,0.586,0.587,0.588,0.589,0.59,0.591,0.592,0.593,0.594,0.595,0.596,0.597,0.598,0.599,0.6,0.601,0.602,0.603,0.604,0.605,0.606,0.607,0.608,0.609,0.61,0.611,0.612,0.613,0.614,0.615,0.616,0.617,0.618,0.619,0.62,0.621,0.622,0.623,0.624,0.625,0.626,0.627,0.628,0.629,0.63,0.631,0.632,0.633,0.634,0.635,0.636,0.637,0.638,0.639,0.64,0.641,0.642,0.643,0.644,0.645,0.646,0.647,0.648,0.649,0.65,0.651,0.652,0.653,0.654,0.655,0.656,0.657,0.658,0.659,0.66,0.661,0.662,0.663,0.664,0.665,0.666,0.667,0.668,0.669,0.67,0.671,0.672,0.673,0.674,0.675,0.676,0.677,0.678,0.679,0.68,0.681,0.682,0.683,0.684,0.685,0.686,0.687,0.688,0.689,0.69,0.691,0.692,0.693,0.694,0.695,0.696,0.697,0.698,0.699,0.7,0.701,0.702,0.703,0.704,0.705,0.706,0.707,0.708,0.709,0.71,0.711,0.712,0.713,0.714,0.715,0.716,0.717,0.718,0.719,0.72,0.721,0.722,0.723,0.724,0.725,0.726,0.727,0.728,0.729,0.73,0.731,0.732,0.733,0.734,0.735,0.736,0.737,0.738,0.739,0.74,0.741,0.742,0.743,0.744,0.745,0.746,0.747,0.748,0.749,0.75,0.751,0.752,0.753,0.754,0.755,0.756,0.757,0.758,0.759,0.76,0.761,0.762,0.763,0.764,0.765,0.766,0.767,0.768,0.769,0.77,0.771,0.772,0.773,0.774,0.775,0.776,0.777,0.778,0.779,0.78,0.781,0.782,0.783,0.784,0.785,0.786,0.787,0.788,0.789,0.79,0.791,0.792,0.793,0.794,0.795,0.796,0.797,0.798,0.799,0.8,0.801,0.802,0.803,0.804,0.805,0.806,0.807,0.808,0.809,0.81,0.811,0.812,0.813,0.814,0.815,0.816,0.817,0.818,0.819,0.82,0.821,0.822,0.823,0.824,0.825,0.826,0.827,0.828,0.829,0.83,0.831,0.832,0.833,0.834,0.835,0.836,0.837,0.838,0.839,0.84,0.841,0.842,0.843,0.844,0.845,0.846,0.847,0.848,0.849,0.85,0.851,0.852,0.853,0.854,0.855,0.856,0.857,0.858,0.859,0.86,0.861,0.862,0.863,0.864,0.865,0.866,0.867,0.868,0.869,0.87,0.871,0.872,0.873,0.874,0.875,0.876,0.877,0.878,0.879,0.88,0.881,0.882,0.883,0.884,0.885,0.886,0.887,0.888,0.889,0.89,0.891,0.892,0.893,0.894,0.895,0.896,0.897,0.898,0.899,0.9,0.901,0.902,0.903,0.904,0.905,0.906,0.907,0.908,0.909,0.91,0.911,0.912,0.913,0.914,0.915,0.916,0.917,0.918,0.919,0.92,0.921,0.922,0.923,0.924,0.925,0.926,0.927,0.928,0.929,0.93,0.931,0.932,0.933,0.934,0.935,0.936,0.937,0.938,0.939,0.94,0.941,0.942,0.943,0.944,0.945,0.946,0.947,0.948,0.949,0.95,0.951,0.952,0.953,0.954,0.955,0.956,0.957,0.958,0.959,0.96,0.961,0.962,0.963,0.964,0.965,0.966,0.967,0.968,0.969,0.97,0.971,0.972,0.973,0.974,0.975,0.976,0.977,0.978,0.979,0.98,0.981,0.982,0.983,0.984,0.985,0.986,0.987,0.988,0.989,0.99,0.991,0.992,0.993,0.994,0.995,0.996,0.997,0.998,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getSCALAR_INTERPOLATOR_3_18_keyValue_1()
		{
			double[] value = {0.0,0.00314158,0.00628314,0.00942463,0.012566,0.0157073,0.0188484,0.0219894,0.0251301,0.0282705,0.0314107,0.0345506,0.0376902,0.0408293,0.0439681,0.0471064,0.0502443,0.0533816,0.0565185,0.0596548,0.0627905,0.0659255,0.06906,0.0721937,0.0753267,0.078459,0.0815905,0.0847213,0.0878511,0.0909801,0.0941082,0.0972354,0.100362,0.103487,0.106611,0.109734,0.112856,0.115977,0.119097,0.122216,0.125333,0.128449,0.131564,0.134678,0.13779,0.140901,0.144011,0.147119,0.150225,0.153331,0.156434,0.159536,0.162637,0.165736,0.168833,0.171929,0.175023,0.178115,0.181206,0.184294,0.187381,0.190466,0.193549,0.196631,0.19971,0.202787,0.205862,0.208936,0.212007,0.215076,0.218143,0.221208,0.224271,0.227331,0.230389,0.233445,0.236499,0.23955,0.242599,0.245646,0.24869,0.251731,0.254771,0.257807,0.260841,0.263873,0.266902,0.269928,0.272952,0.275973,0.278991,0.282006,0.285019,0.288029,0.291036,0.29404,0.297041,0.30004,0.303035,0.306027,0.309017,0.312003,0.314986,0.317966,0.320943,0.323917,0.326888,0.329855,0.332819,0.33578,0.338738,0.341692,0.344643,0.34759,0.350534,0.353475,0.356412,0.359345,0.362275,0.365201,0.368124,0.371043,0.373959,0.376871,0.379779,0.382683,0.385584,0.38848,0.391373,0.394262,0.397148,0.400029,0.402906,0.405779,0.408649,0.411514,0.414375,0.417232,0.420085,0.422934,0.425779,0.428619,0.431456,0.434288,0.437115,0.439939,0.442758,0.445573,0.448383,0.451189,0.45399,0.456787,0.45958,0.462367,0.465151,0.467929,0.470704,0.473473,0.476238,0.478998,0.481753,0.484504,0.48725,0.489991,0.492727,0.495458,0.498185,0.500906,0.503623,0.506334,0.509041,0.511743,0.514439,0.517131,0.519817,0.522498,0.525174,0.527845,0.530511,0.533171,0.535826,0.538476,0.541121,0.54376,0.546394,0.549022,0.551645,0.554263,0.556875,0.559482,0.562083,0.564679,0.567269,0.569853,0.572432,0.575005,0.577572,0.580134,0.58269,0.58524,0.587785,0.590324,0.592856,0.595383,0.597905,0.60042,0.602929,0.605432,0.60793,0.610421,0.612907,0.615386,0.617859,0.620326,0.622787,0.625242,0.627691,0.630133,0.63257,0.635,0.637424,0.639841,0.642252,0.644657,0.647056,0.649448,0.651833,0.654213,0.656585,0.658952,0.661311,0.663665,0.666011,0.668352,0.670685,0.673012,0.675332,0.677646,0.679953,0.682253,0.684547,0.686833,0.689113,0.691387,0.693653,0.695912,0.698165,0.700411,0.70265,0.704881,0.707106,0.709324,0.711535,0.713739,0.715936,0.718126,0.720309,0.722484,0.724653,0.726814,0.728968,0.731115,0.733255,0.735387,0.737513,0.739631,0.741741,0.743845,0.745941,0.748029,0.750111,0.752184,0.754251,0.75631,0.758361,0.760405,0.762442,0.764471,0.766493,0.768506,0.770513,0.772511,0.774503,0.776486,0.778462,0.78043,0.78239,0.784343,0.786288,0.788225,0.790155,0.792076,0.79399,0.795896,0.797794,0.799684,0.801567,0.803441,0.805307,0.807166,0.809017,0.810859,0.812694,0.81452,0.816339,0.818149,0.819952,0.821746,0.823532,0.82531,0.82708,0.828842,0.830595,0.832341,0.834078,0.835807,0.837528,0.83924,0.840944,0.84264,0.844327,0.846007,0.847677,0.84934,0.850994,0.85264,0.854277,0.855906,0.857526,0.859138,0.860742,0.862337,0.863923,0.865501,0.86707,0.868631,0.870183,0.871727,0.873262,0.874788,0.876306,0.877815,0.879316,0.880808,0.882291,0.883765,0.885231,0.886688,0.888136,0.889575,0.891006,0.892428,0.893841,0.895245,0.896641,0.898027,0.899405,0.900774,0.902134,0.903485,0.904827,0.90616,0.907484,0.908799,0.910106,0.911403,0.912691,0.91397,0.915241,0.916502,0.917754,0.918997,0.920231,0.921456,0.922672,0.923879,0.925077,0.926265,0.927445,0.928615,0.929776,0.930928,0.932071,0.933204,0.934329,0.935444,0.93655,0.937646,0.938734,0.939812,0.94088,0.94194,0.94299,0.944031,0.945063,0.946085,0.947098,0.948102,0.949096,0.950081,0.951056,0.952022,0.952979,0.953926,0.954864,0.955793,0.956712,0.957621,0.958521,0.959412,0.960293,0.961165,0.962027,0.96288,0.963723,0.964557,0.965381,0.966196,0.967001,0.967797,0.968583,0.969359,0.970126,0.970884,0.971631,0.97237,0.973098,0.973817,0.974527,0.975226,0.975917,0.976597,0.977268,0.977929,0.978581,0.979223,0.979855,0.980477,0.98109,0.981694,0.982287,0.982871,0.983445,0.984009,0.984564,0.985109,0.985644,0.98617,0.986686,0.987192,0.987688,0.988175,0.988652,0.989119,0.989576,0.990023,0.990461,0.990889,0.991307,0.991716,0.992115,0.992503,0.992882,0.993252,0.993611,0.993961,0.994301,0.994631,0.994951,0.995261,0.995562,0.995853,0.996133,0.996405,0.996666,0.996917,0.997159,0.997391,0.997612,0.997824,0.998027,0.998219,0.998401,0.998574,0.998737,0.99889,0.999033,0.999166,0.999289,0.999403,0.999507,0.9996,0.999684,0.999758,0.999822,0.999877,0.999921,0.999956,0.99998,0.999995,1.0,0.999995,0.99998,0.999956,0.999921,0.999877,0.999822,0.999758,0.999684,0.9996,0.999507,0.999403,0.99929,0.999166,0.999033,0.99889,0.998737,0.998574,0.998402,0.998219,0.998027,0.997825,0.997613,0.997391,0.997159,0.996917,0.996666,0.996405,0.996134,0.995853,0.995562,0.995262,0.994951,0.994631,0.994301,0.993961,0.993611,0.993252,0.992883,0.992504,0.992115,0.991716,0.991308,0.99089,0.990462,0.990024,0.989576,0.989119,0.988652,0.988175,0.987689,0.987192,0.986686,0.98617,0.985645,0.98511,0.984565,0.98401,0.983445,0.982871,0.982288,0.981694,0.981091,0.980478,0.979855,0.979223,0.978581,0.97793,0.977268,0.976598,0.975917,0.975227,0.974527,0.973818,0.973099,0.97237,0.971632,0.970884,0.970127,0.96936,0.968584,0.967797,0.967002,0.966197,0.965382,0.964558,0.963724,0.962881,0.962028,0.961166,0.960294,0.959413,0.958522,0.957622,0.956713,0.955793,0.954865,0.953927,0.95298,0.952023,0.951057,0.950082,0.949097,0.948102,0.947099,0.946086,0.945064,0.944032,0.942991,0.941941,0.940881,0.939813,0.938734,0.937647,0.93655,0.935445,0.93433,0.933205,0.932072,0.930929,0.929777,0.928616,0.927446,0.926266,0.925078,0.92388,0.922673,0.921457,0.920232,0.918998,0.917755,0.916503,0.915242,0.913972,0.912692,0.911404,0.910107,0.9088,0.907485,0.906161,0.904828,0.903486,0.902135,0.900775,0.899406,0.898028,0.896642,0.895246,0.893842,0.892429,0.891007,0.889577,0.888137,0.886689,0.885232,0.883766,0.882292,0.880809,0.879317,0.877817,0.876308,0.87479,0.873263,0.871728,0.870185,0.868632,0.867072,0.865502,0.863924,0.862338,0.860743,0.859139,0.857528,0.855907,0.854278,0.852641,0.850995,0.849341,0.847679,0.846008,0.844329,0.842641,0.840946,0.839241,0.837529,0.835808,0.834079,0.832342,0.830597,0.828843,0.827082,0.825312,0.823534,0.821747,0.819953,0.818151,0.81634,0.814522,0.812695,0.810861,0.809018,0.807168,0.805309,0.803443,0.801568,0.799686,0.797796,0.795897,0.793992,0.792078,0.790156,0.788227,0.78629,0.784345,0.782392,0.780432,0.778463,0.776488,0.774504,0.772513,0.770514,0.768508,0.766494,0.764473,0.762444,0.760407,0.758363,0.756312,0.754253,0.752186,0.750112,0.748031,0.745942,0.743846,0.741743,0.739632,0.737514,0.735389,0.733257,0.731117,0.72897,0.726816,0.724654,0.722486,0.72031,0.718128,0.715938,0.713741,0.711537,0.709326,0.707108,0.704883,0.702651,0.700413,0.698167,0.695914,0.693655,0.691388,0.689115,0.686835,0.684549,0.682255,0.679955,0.677648,0.675334,0.673014,0.670687,0.668354,0.666013,0.663667,0.661313,0.658954,0.656587,0.654215,0.651835,0.64945,0.647058,0.644659,0.642254,0.639843,0.637426,0.635002,0.632572,0.630135,0.627693,0.625244,0.622789,0.620328,0.617861,0.615388,0.612909,0.610423,0.607932,0.605435,0.602931,0.600422,0.597907,0.595386,0.592859,0.590326,0.587787,0.585242,0.582692,0.580136,0.577574,0.575007,0.572434,0.569855,0.567271,0.564681,0.562085,0.559484,0.556877,0.554265,0.551648,0.549025,0.546396,0.543762,0.541123,0.538479,0.535829,0.533173,0.530513,0.527847,0.525176,0.5225,0.519819,0.517133,0.514441,0.511745,0.509043,0.506337,0.503625,0.500909,0.498187,0.495461,0.492729,0.489993,0.487252,0.484506,0.481756,0.479,0.47624,0.473475,0.470706,0.467932,0.465153,0.46237,0.459582,0.456789,0.453993,0.451191,0.448385,0.445575,0.44276,0.439941,0.437118,0.43429,0.431458,0.428622,0.425781,0.422937,0.420088,0.417235,0.414378,0.411516,0.408651,0.405782,0.402909,0.400031,0.39715,0.394265,0.391376,0.388483,0.385586,0.382686,0.379781,0.376873,0.373961,0.371046,0.368127,0.365204,0.362278,0.359348,0.356414,0.353477,0.350537,0.347593,0.344645,0.341694,0.33874,0.335783,0.332822,0.329858,0.32689,0.32392,0.320946,0.317969,0.314989,0.312006,0.309019,0.30603,0.303038,0.300042,0.297044,0.294043,0.291038,0.288031,0.285022,0.282009,0.278993,0.275975,0.272954,0.269931,0.266904,0.263875,0.260844,0.25781,0.254773,0.251734,0.248692,0.245648,0.242602,0.239553,0.236501,0.233448,0.230392,0.227334,0.224273,0.22121,0.218146,0.215079,0.21201,0.208938,0.205865,0.20279,0.199712,0.196633,0.193552,0.190469,0.187384,0.184297,0.181208,0.178118,0.175026,0.171932,0.168836,0.165739,0.16264,0.159539,0.156437,0.153333,0.150228,0.147121,0.144013,0.140904,0.137793,0.134681,0.131567,0.128452,0.125336,0.122218,0.1191,0.11598,0.112859,0.109737,0.106614,0.103489,0.100364,0.0972381,0.0941109,0.0909828,0.0878538,0.0847239,0.0815932,0.0784617,0.0753294,0.0721964,0.0690626,0.0659282,0.0627931,0.0596574,0.0565211,0.0533843,0.0502469,0.0471091,0.0439707,0.040832,0.0376928,0.0345533,0.0314134,0.0282732,0.0251327,0.021992,0.0188511,0.01571,0.0125687,0.00942728,0.00628579,0.00314424};
			return value;
		}

		/** Large attribute array: ScalarInterpolator DEF='SCALAR_INTERPOLATOR' key field, scene-graph level=3, element #18, 1000 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getSCALAR_INTERPOLATOR_3_18_key()
		{
			MFFloat SCALAR_INTERPOLATOR_3_18_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getSCALAR_INTERPOLATOR_3_18_key_1()));
			return SCALAR_INTERPOLATOR_3_18_key;
		}
		/** Large attribute array: ScalarInterpolator DEF='SCALAR_INTERPOLATOR' keyValue field, scene-graph level=3, element #18, 1000 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getSCALAR_INTERPOLATOR_3_18_keyValue()
		{
			MFFloat SCALAR_INTERPOLATOR_3_18_keyValue = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getSCALAR_INTERPOLATOR_3_18_keyValue_1()));
			return SCALAR_INTERPOLATOR_3_18_keyValue;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return keys1000 model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new keys1000().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.keys1000\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.keys1000\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
