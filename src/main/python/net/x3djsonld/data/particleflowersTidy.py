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
    component(level=3,name='EnvironmentalEffects'),
    component(level=1,name='Shaders'),
    component(level=1,name='CubeMapTexturing'),
    component(level=1,name='Texturing'),
    component(level=1,name='Rendering'),
    component(level=3,name='Grouping'),
    component(level=1,name='Core'),
    component(level=3,name='ParticleSystems'),
    meta(content='particleflowers.x3d',name='title'),
    meta(content='John Carlson',name='creator'),
    meta(content='A flower particle system',name='description'),
    meta(content='https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d',name='identifier'),
    meta(content='Vim',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='particleflowers.x3d'),
    NavigationInfo(type=["ANY","EXAMINE","FLY","LOOKAT"]),
    Viewpoint(description='Tour Views',position=(0,0,12)),
    Background(backUrl=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Group(
      children=[
      ParticleSystem(geometryType='GEOMETRY',maxParticles=20,
        physics=[
        BoundedPhysicsModel(
          geometry=Sphere(radius=100)),],
        emitter=ExplosionEmitter(speed=2,variation=0.75),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5)),
          texture=ComposedCubeMapTexture(DEF='texture',
            backTexture=ImageTexture(url=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
            bottomTexture=ImageTexture(url=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
            frontTexture=ImageTexture(url=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
            leftTexture=ImageTexture(url=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
            rightTexture=ImageTexture(url=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
            topTexture=ImageTexture(url=["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])),
          shaders=[
          ComposedShader(DEF='x_ite',language='GLSL',
            field=[
            field(accessType='initializeOnly',name='chromaticDispertion',type='SFVec3f',value=(0.98,1,1.033)),
            field(accessType='initializeOnly',name='cube',type='SFNode',
              children=[
              ComposedCubeMapTexture(USE='texture')]),
            field(accessType='initializeOnly',name='bias',type='SFFloat',value=0.5),
            field(accessType='initializeOnly',name='scale',type='SFFloat',value=0.5),
            field(accessType='initializeOnly',name='power',type='SFFloat',value=2),
            field(accessType='inputOutput',name='a',type='SFFloat',value=2),
            field(accessType='inputOutput',name='b',type='SFFloat',value=1),
            field(accessType='inputOutput',name='c',type='SFFloat',value=5),
            field(accessType='inputOutput',name='d',type='SFFloat',value=5),
            field(accessType='inputOutput',name='tdelta',type='SFFloat',value=0),
            field(accessType='inputOutput',name='pdelta',type='SFFloat',value=0)],
            parts=[
            ShaderPart(url=["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"]),
            ShaderPart(type='FRAGMENT',url=["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"])])]),
        geometry=Sphere(),),
      Script(DEF='Animate',
        field=[
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='velocity',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
        field(accessType='inputOutput',name='a',type='SFFloat',value=0.5),
        field(accessType='inputOutput',name='b',type='SFFloat',value=0.5),
        field(accessType='inputOutput',name='c',type='SFFloat',value=3),
        field(accessType='inputOutput',name='d',type='SFFloat',value=3),
        field(accessType='inputOutput',name='tdelta',type='SFFloat',value=0.5),
        field(accessType='inputOutput',name='pdelta',type='SFFloat',value=0.5)],

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
      ROUTE(fromField='fraction_changed',fromNode='TourTime',toField='set_fraction',toNode='Animate'),
      ROUTE(fromField='a',fromNode='Animate',toField='a',toNode='x_ite'),
      ROUTE(fromField='b',fromNode='Animate',toField='b',toNode='x_ite'),
      ROUTE(fromField='c',fromNode='Animate',toField='c',toNode='x_ite'),
      ROUTE(fromField='d',fromNode='Animate',toField='d',toNode='x_ite'),
      ROUTE(fromField='pdelta',fromNode='Animate',toField='pdelta',toNode='x_ite'),
      ROUTE(fromField='tdelta',fromNode='Animate',toField='tdelta',toNode='x_ite')])])
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
