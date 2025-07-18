####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python particleflowers.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(name='EnvironmentalEffects',level=3),
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    component(name='Grouping',level=3),
    component(name='Core',level=1),
    component(name='ParticleSystems',level=3),
    meta(name='title',content='particleflowers.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='A flower proto with configurable shaders'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d')]),
  Scene=Scene(
    children=[
    WorldInfo(title='particleflowers.x3d'),
    NavigationInfo(type='"ANY" "EXAMINE" "FLY" "LOOKAT"'),
    Viewpoint(description='Tour Views',position=(0,0,12)),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Transform(
      children=[
      ParticleSystem(maxParticles=20,geometryType='GEOMETRY',
        physics=[
        BoundedPhysicsModel(
          geometry=Sphere(radius=100)),],
        emitter=ExplosionEmitter(speed=2,variation=0.75),
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5)),
          texture=ComposedCubeMapTexture(DEF='texture',
            backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
            bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
            frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_from.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
            leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
            rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
            topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])),
          shaders=[
          ComposedShader(DEF='shader',language='GLSL',
            field=[
            field(name='cube',type='SFInt32',accessType='inputOutput',value=0),
            # 
		  <field name='cube' type='SFNode' accessType="initializeOnly">
			<ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
		  </field>
				  
            field(name='chromaticDispertion',accessType='initializeOnly',type='SFVec3f',value=(0.98,1.0,1.033)),
            field(name='bias',type='SFFloat',accessType='inputOutput',value=0.5),
            field(name='scale',type='SFFloat',accessType='inputOutput',value=0.5),
            field(name='power',type='SFFloat',accessType='inputOutput',value=2),
            field(name='a',type='SFFloat',accessType='inputOutput',value=2),
            field(name='b',type='SFFloat',accessType='inputOutput',value=1),
            field(name='c',type='SFFloat',accessType='inputOutput',value=5),
            field(name='d',type='SFFloat',accessType='inputOutput',value=5),
            field(name='tdelta',type='SFFloat',accessType='inputOutput',value=0),
            field(name='pdelta',type='SFFloat',accessType='inputOutput',value=0)],
            parts=[
            ShaderPart(url=["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"]),
            ShaderPart(type='FRAGMENT',url=["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"])])])),
      Script(DEF='Animate',
        field=[
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_fraction',accessType='inputOnly',type='SFFloat'),
        field(name='a',type='SFFloat',accessType='inputOutput',value=0.5),
        field(name='b',type='SFFloat',accessType='inputOutput',value=0.5),
        field(name='c',type='SFFloat',accessType='inputOutput',value=3),
        field(name='d',type='SFFloat',accessType='inputOutput',value=3),
        field(name='tdelta',type='SFFloat',accessType='inputOutput',value=0.5),
        field(name='pdelta',type='SFFloat',accessType='inputOutput',value=0.5)],

      sourceCode="""
ecmascript:

			function initialize() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(translation.x) > 10) {
					initialize();
				    } else if (Math.abs(translation.y) > 10) {
					initialize();
				    } else if (Math.abs(translation.z) > 10) {
					initialize();
				    } else {
					velocity.x += Math.random() * 0.2 - 0.1;
					velocity.y += Math.random() * 0.2 - 0.1;
					velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    animate_flowers();
			}

			function animate_flowers(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					c += Math.random() * 2 - 1;
					break;
				case 3:
					d += Math.random() * 2 - 1;
					break;
				}
				tdelta = tdelta + 0.05;
				pdelta = pdelta + 0.05;
				if (a > 1) {
					a =  0.5;
				}
				if (b > 1) {
					b =  0.5;
				}
				if (c < 1) {
					c =  4;
				}
				if (d < 1) {
					d =  4;
				}
				if (c > 10) {
					c = 4;
				}
				if (d > 10) {
					d = 4;
				}
			}
"""),
      TimeSensor(DEF='TourTime',cycleInterval=5,loop=True),
      ROUTE(fromNode='TourTime',fromField='fraction_changed',toNode='Animate',toField='set_fraction'),
      ROUTE(fromNode='Animate',fromField='a',toNode='shader',toField='a'),
      ROUTE(fromNode='Animate',fromField='b',toNode='shader',toField='b'),
      ROUTE(fromNode='Animate',fromField='c',toNode='shader',toField='c'),
      ROUTE(fromNode='Animate',fromField='d',toNode='shader',toField='d'),
      ROUTE(fromNode='Animate',fromField='pdelta',toNode='shader',toField='pdelta'),
      ROUTE(fromNode='Animate',fromField='tdelta',toNode='shader',toField='tdelta')])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for particleflowers.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python particleflowers.py load and self-test diagnostics complete.")
