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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    meta(name='title',content='flowers4.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/flowers4.x3d'),
    meta(name='description',content='an animated flower')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Transform(DEF='transform',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5)),
          texture=ComposedCubeMapTexture(
            back=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]),
            bottom=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
            front=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]),
            left=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]),
            right=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]),
            top=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])),
          shaders=ComposedShader(DEF='shader',language='GLSL',
            field=[
            field(name='cube',type='SFInt32',accessType='inputOutput',value=0),
            field(name='chromaticDispertion',accessType='inputOutput',type='SFVec3f',value=(0.98,1.0,1.033)),
            field(name='bias',type='SFFloat',accessType='inputOutput',value=0.5),
            field(name='scale',type='SFFloat',accessType='inputOutput',value=0.5),
            field(name='power',type='SFFloat',accessType='inputOutput',value=2)],
            parts=ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]),
            ShaderPart(url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"],type='FRAGMENT'))),
        # 
                <Sphere>
		
        geometry=IndexedFaceSet(convex=False,DEF='Orbit',
          coord=Coordinate(DEF='OrbitCoordinates')))]),
    Script(DEF='OrbitScript',
      field=[
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='inputOutput',name='coordinates',type='MFVec3f'),
      field(accessType='outputOnly',name='coordIndexes',type='MFInt32')]),
    TimeSensor(DEF='Clock',cycleInterval=16,loop=True),
    ROUTE(fromField='coordIndexes',fromNode='OrbitScript',toField='set_coordIndex',toNode='Orbit'),
    ROUTE(fromField='coordinates',fromNode='OrbitScript',toField='set_point',toNode='OrbitCoordinates'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='OrbitScript')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for flowers4.py")