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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='BlenderDefaultBox.x3d',name='title'),
    meta(content='Blender default box exported to X3D, with adjustments and cleanups to illustrate best practices for authoring. After launching Blender use menu items File, Export, X3D.',name='description'),
    meta(content='19 March 2020',name='created'),
    meta(content='19 March 2020',name='translated'),
    meta(content='20 March 2020',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='BlenderIssues.txt',name='reference'),
    meta(content='BlenderDefaultEntryScreen.png',name='Image'),
    meta(content='BlenderDefaultBox.original.txt',name='reference'),
    meta(content='Blender 2.82 (sub 7) https://blender.org',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/X3dTooltips.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Conversions/BlenderDefaultBox.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BlenderDefaultBox'),
    NavigationInfo(avatarSize=[0.25,1.75,0.75],headlight=False),
    Background(DEF='WO_World',groundColor=[(0.051,0.051,0.051)],skyColor=[(0.051,0.051,0.051)]),
    Transform(DEF='Cube_TRANSFORM',rotation=(0,0.707107,0.707107,3.141593),
      children=[
      Transform(DEF='Cube_ifs_TRANSFORM',
        children=[
        Group(DEF='group_ME_Cube',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='MA_Material',ambientIntensity=0,shininess=0.5,specularColor=(0.401,0.401,0.401))),
            geometry=IndexedFaceSet(coordIndex=[0,4,6,2,-1,3,2,6,7,-1,7,6,4,5,-1,5,1,3,7,-1,1,0,2,3,-1,5,4,0,1,-1],solid=False,texCoordIndex=[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1],
              coord=Coordinate(DEF='coords_ME_Cube',point=[(1,1,1),(1,1,-1),(1,-1,1),(1,-1,-1),(-1,1,1),(-1,1,-1),(-1,-1,1),(-1,-1,-1)]),
              texCoord=TextureCoordinate(point=[(0.625,0.5),(0.875,0.5),(0.875,0.75),(0.625,0.75),(0.375,0.75),(0.625,0.75),(0.625,1),(0.375,1),(0.375,0),(0.625,0),(0.625,0.25),(0.375,0.25),(0.125,0.5),(0.375,0.5),(0.375,0.75),(0.125,0.75),(0.375,0.5),(0.625,0.5),(0.625,0.75),(0.375,0.75),(0.375,0.25),(0.625,0.25),(0.625,0.5),(0.375,0.5)])))])])]),
    Transform(DEF='Light_TRANSFORM',rotation=(-0.498084,-0.762016,-0.413815,1.513875),translation=(-4.076245,5.903862,1.005454),
      children=[
      PointLight(DEF='LA_Light',radius=30)]),
    Transform(DEF='Camera_TRANSFORM',rotation=(-0.098233,-0.968789,-0.227591,2.349487),translation=(-7.358891,4.958309,-6.925791),
      children=[
      Viewpoint(DEF='CA_Camera',description='initial view, rotate to examine object',fieldOfView=0.691,orientation=(0,-0.47,-0.88,0),position=(0,0,0))]),
    #  RGB axes debug diagnostic added to original box 
    Transform(DEF='DebugDiagnostic',scale=(2,2,2),
      children=[
      Shape(DEF='AxisLinesShape',
        #  RGB lines showing XYZ axes 
        geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
          coord=Coordinate(point=[(0,0,0),(1.0,0,0),(0,1.0,0),(0,0,1.0)]),
          color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BlenderDefaultBox.py")
