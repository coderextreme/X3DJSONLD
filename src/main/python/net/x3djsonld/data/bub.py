####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
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
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    component(name='Shape',level=4),
    component(name='Grouping',level=3),
    meta(name='title',content='bub.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='3 prismatic spheres'),
    meta(name='generator',content='X3D-Edit, https://savage.nps.edu/X3D-Edit'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/bub.x3d')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Viewpoint(position=(0,0,20),description='Look at the bubbles flying'),
    ProtoDeclare(name='Bubble',
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='transform',
          children=[
          Shape(DEF='myShape',
            appearance=Appearance(
              material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5)),
              texture=ComposedCubeMapTexture(DEF='texture',
                backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]),
                bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
                frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]),
                leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]),
                rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]),
                topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])),
              # 
					<ComposedShader DEF='gl' language="GLSL">
					  <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/>
					  <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/>
					  <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/>
					  <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/>
					  <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/>

					  <ShaderPart url='"../shaders/gl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs"' type='VERTEX'></ShaderPart>
					  <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart>
					</ComposedShader>
					<ComposedShader DEF='freewrl' language="GLSL">
					  <field name='fw_textureCoodGenType' type='SFInt32' accessType="inputOutput" value='0'/>
					  <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/>
					  <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/>
					  <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/>
					  <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/>

					  <ShaderPart url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' type='VERTEX'></ShaderPart>
					  <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart>
					</ComposedShader>
					
              shaders=[
              ComposedShader(DEF='x3dom',language='GLSL',
                field=[
                field(name='cube',type='SFInt32',accessType='inputOutput',value=0),
                field(name='chromaticDispertion',type='SFVec3f',accessType='inputOutput',value=(0.98,1.0,1.033)),
                field(name='bias',type='SFFloat',accessType='inputOutput',value=0.5),
                field(name='scale',type='SFFloat',accessType='inputOutput',value=0.5),
                field(name='power',type='SFFloat',accessType='inputOutput',value=2.0)],
                parts=[
                ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]),
                ShaderPart(url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"],type='FRAGMENT')]),
              # 
					<ComposedShader DEF='instant' language="GLSL">
					  <field name='cube' type='SFInt32' accessType="inputOutput" value='0'/>
					  <field name='chromaticDispertion' type='SFVec3f' accessType="inputOutput" value='0.98 1.0 1.033'/>
					  <field name='bias' type='SFFloat' accessType="inputOutput" value='0.5'/>
					  <field name='scale' type='SFFloat' accessType="inputOutput" value='0.5'/>
					  <field name='power' type='SFFloat' accessType="inputOutput" value='2.0'/>

			      <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type='VERTEX'></ShaderPart>
			      <ShaderPart url='"../shaders/pc_bubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"' type='FRAGMENT'></ShaderPart>
                            </ComposedShader>
                            
              ComposedShader(DEF='x_ite',language='GLSL',
                field=[
                field(name='cube',type='SFNode',accessType='inputOutput',
                  children=[
                  ComposedCubeMapTexture(USE='texture')]),
                field(name='chromaticDispertion',type='SFVec3f',accessType='inputOutput',value=(0.98,1.0,1.033)),
                field(name='bias',type='SFFloat',accessType='inputOutput',value=0.5),
                field(name='scale',type='SFFloat',accessType='inputOutput',value=0.5),
                field(name='power',type='SFFloat',accessType='inputOutput',value=2.0)],
                parts=[
                ShaderPart(url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]),
                ShaderPart(url=["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"],type='FRAGMENT')])]),
            geometry=Sphere(),)]),
        Script(DEF='Bounce',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_fraction',accessType='inputOnly',type='SFTime')],

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
"""),
        TimeSensor(DEF='TourTime',cycleInterval=0.150,loop=True),
        ROUTE(fromNode='TourTime',fromField='cycleTime',toNode='Bounce',toField='set_fraction'),
        ROUTE(fromNode='Bounce',fromField='translation_changed',toNode='transform',toField='set_translation')])),
    ProtoInstance(name='Bubble'),
    ProtoInstance(name='Bubble'),
    ProtoInstance(name='Bubble')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for bub.py:')
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

print("python bub.py load and self-test diagnostics complete.")
