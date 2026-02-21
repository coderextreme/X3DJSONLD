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
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
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
    NavigationInfo(type=["ANY","EXAMINE","FLY","LOOKAT"]),
    Viewpoint(description='Tour Views',position=(0,0,12)),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Transform(
      children=[
      ParticleSystem(maxParticles=100,geometryType='GEOMETRY',
        # * values - array of MFFloats to pass to ComposedShader

        # * variations in values - array of MFFloats to pass to ComposedShader that varies values

        # * lastFrame - last frame that was rendered (0 for default)

        # * updateRate - update rate is amount of time between frames

        # <VariationPhysicsModel values="2 2 5 5 0 0" varations="2 1 3 3 0.1 0.1" lastFrame='0' updateRate='0.1'>

        # </VariationPhysicsModel>

        emitter=ExplosionEmitter(speed=1,variation=0.75),
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5)),
          texture=ComposedCubeMapTexture(DEF='texture',
            backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
            bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
            frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
            leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
            rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
            topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])),
          # <ComposedShader language='GLSL'>

          # <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>

          # <field name='cube' type='SFNode' accessType="inputOutput">

          # <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>

          # </field>

          # <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>

          # <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>

          # <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>

          # <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"'></ShaderPart>

          # <ShaderPart url='"../shaders/freewrl.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' type='FRAGMENT'></ShaderPart>

          # </ComposedShader>

          # <ComposedShader DEF="shader" language="GLSL">

          # <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>

          # <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>

          # <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>

          # <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>

          # <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>

          # <ShaderPart url='"../shaders/castle.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"'/>

          # <ShaderPart type='FRAGMENT' url='"../shaders/castle.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"'/>

          # </ComposedShader>

          shaders=[
          ComposedShader(DEF='x_ite',language='GLSL',
            field=[
            field(name='chromaticDispertion',accessType='initializeOnly',type='SFVec3f',value=(0.98,1,1.033)),
            field(name='cube',type='SFNode',accessType='initializeOnly',
              children=[
              ComposedCubeMapTexture(USE='texture')]),
            field(name='bias',accessType='initializeOnly',type='SFFloat',value=0.5),
            field(name='scale',accessType='initializeOnly',type='SFFloat',value=0.5),
            field(name='power',accessType='initializeOnly',type='SFFloat',value=2),
            field(name='x3d_ParticleValues',type='MFFloat',accessType='inputOutput',value=[2,1,4,4,0,0])],
            parts=[
            ShaderPart(url=["../shaders/x_ite_variations.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs"]),
            ShaderPart(url=["../shaders/commonnew.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"],type='FRAGMENT')])])),
      Script(DEF='Animate',
        field=[
        field(name='set_fraction',accessType='inputOnly',type='SFFloat'),
        field(name='values',type='MFFloat',accessType='inputOutput',value=[2,2,5,5,0,0]),
        field(name='variations',type='MFFloat',accessType='inputOutput',value=[0.2,0.1,0.3,0.3,0.01,0.01]),
        field(name='lastframe',type='SFFloat',accessType='inputOutput',value=0),
        field(name='updaterate',type='SFFloat',accessType='inputOutput',value=0.1)],

      sourceCode="""
ecmascript:
			function set_fraction(f, tm) {
			    if (lastframe + updaterate < tm) {
			  	lastframe = tm;
				for (let v in values) {
					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];
				}
			    }
			}
"""),
      TimeSensor(DEF='TourTime',cycleInterval=45,loop=True),
      ROUTE(fromNode='TourTime',fromField='fraction_changed',toNode='Animate',toField='set_fraction'),
      ROUTE(fromNode='Animate',fromField='values',toNode='x_ite',toField='x3d_ParticleValues')])])
)

### X3D model conversion complete ###

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
