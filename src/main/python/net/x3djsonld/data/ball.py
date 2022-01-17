###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='Scripting'),
    # component name='EnvironmentalEffects' level='1'></component
    component(name='EnvironmentalEffects',level=3),
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    component(name='Shape',level=4),
    component(name='Grouping',level=3),
    component(name='Core',level=1),
    meta(name='title',content='ball.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/ball.x3d'),
    meta(name='description',content='a prismatic sphere')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ball.x3d'),
    NavigationInfo(type='"ANY" "EXAMINE" "FLY" "LOOKAT"'),
    Viewpoint(description='Tour Views'),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Transform(
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5)),
          texture=ComposedCubeMapTexture(DEF='texture',
            backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]),
            bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
            frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]),
            leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]),
            rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]),
            topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])),
          # 
                    <ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>
			<ShaderProgram url='"../shaders/freewrl.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"' containerField='programs' type='VERTEX'>
                        <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>
                        <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>
                        <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>
                        <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>
                        </ShaderProgram>
			<ShaderProgram url='"../shaders/freewrl.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"' containerField='programs' type='FRAGMENT'/>
		    </ProgramShader>
		
          # 
                <ComposedShader language='GLSL'>
		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>
		  <field name='fw_Texture_unit0' type='SFNode' accessType="initializeOnly">
			<ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
		  </field>
		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>
		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>
		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>
		  <ShaderPart url='"../shaders/contact.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs"' type="VERTEX" containerField='parts'></ShaderPart>
		  <ShaderPart url='"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' containerField='parts' type='FRAGMENT'></ShaderPart>
                </ComposedShader>
		
          # 
                <ComposedShader language='GLSL'>
		  <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>
		  <field name='cube' type='SFNode' accessType="inputOutput">
			<ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture>
		  </field>
		  <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>
		  <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>
		  <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>
		  <ShaderPart url='"../shaders/octaga.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs"' type="VERTEX" containerField='parts'></ShaderPart>
		  <ShaderPart url='"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' containerField='parts' type='FRAGMENT'></ShaderPart>
                </ComposedShader>
		
          # 
                <ComposedShader language='GLSL'>
		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>
		  <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>
		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>
		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>
		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>
		  <ShaderPart url='"../shaders/instant.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs"' type="VERTEX" containerField='parts'></ShaderPart>
		  <ShaderPart url='"../shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' containerField='parts' type='FRAGMENT'></ShaderPart>
                </ComposedShader>
		
          # 
		
          shaders=ComposedShader(language='GLSL',
            field=[
            field(name='chromaticDispertion',accessType='inputOutput',type='SFVec3f',value=(0.98,1,1.033)),
            field(name='cube',type='SFNode',accessType='inputOutput',
              children=[
              ComposedCubeMapTexture(USE='texture')]),
            field(name='bias',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='scale',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='power',accessType='inputOutput',type='SFFloat',value=2)],
            parts=ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]),
            ShaderPart(DEF='common',url=["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"],type='FRAGMENT')),
          ComposedShader(language='GLSL',
            field=[
            field(name='chromaticDispertion',accessType='initializeOnly',type='SFVec3f',value=(0.98,1,1.033)),
            field(name='cube',type='SFNode',accessType='initializeOnly',
              children=[
              ComposedCubeMapTexture(USE='texture')]),
            field(name='bias',accessType='initializeOnly',type='SFFloat',value=0.5),
            field(name='scale',accessType='initializeOnly',type='SFFloat',value=0.5),
            field(name='power',accessType='initializeOnly',type='SFFloat',value=2)],
            parts=ShaderPart(url=["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]),
            ShaderPart(url=["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"],type='FRAGMENT'))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for ball.py")
