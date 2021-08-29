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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='AllVrml97Nodes.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 January 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(DEF='WORLDINFO',title='VRML test scene: x3d/content/AllVrml97Nodes.wrl'),
    WorldInfo(DEF='DTD_TAGSET_CANDIDATES'),
    WorldInfo(DEF='Xj3D_BUGS_AND_ISSUES'),
    WorldInfo(DEF='Xj3D_FIXES'),
    WorldInfo(DEF='XEENA_BUGS_AND_ISSUES'),
    WorldInfo(DEF='XEENA_FIXES'),
    Background(DEF='BACKGROUND',groundColor=[(0.0,0.0,0.0)]),
    Fog(DEF='FOG'),
    NavigationInfo(DEF='NAVIGATIONINFO',type=["EXAMINE","WALK","ANY","FLY"]),
    Viewpoint(DEF='VIEWPOINT'),
    Anchor(DEF='ANCHOR',
      children=[
      Billboard(DEF='Billboard',
        children=[
        Shape(DEF='SHAPE_BOX',
          geometry=Box(DEF='BOX'),
          appearance=Appearance(DEF='APPEARANCE',
            texture=ImageTexture(DEF='IMAGETEXTURE',url=["../icons/cube.gif","https://www.web3d.org/x3d/content/examples/Basic/development/../icons/cube.gif"]),
            material=Material(DEF='MATERIAL')))]),
      Collision(DEF='COLLISION',
        children=[
        Group(DEF='PROXY_GROUP',
          children=[
          Shape(DEF='PROXY_SHAPE',
            geometry=Box(DEF='PROXY_BOX'))]),
        Shape(DEF='SHAPE_CONE',
          geometry=Cone(DEF='CONE'),
          appearance=Appearance(),)]),
      Group(DEF='GROUP',
        children=[
        Shape(DEF='SHAPE_CYLINDER',
          geometry=Cylinder(DEF='CYLINDER'),
          appearance=Appearance(),)]),
      Inline(DEF='INLINE',url=["inlineTestFileOne.wrl","inlineTestFileTwo.wrl","inlineTestFileEmbedding%20Blanks%20In%20Name.wrl"]),
      Inline(DEF='INLINE_HELLO_WORLD',url=["HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl"]),
      LOD(DEF='LOD',range=[1.0],
        children=[
        Shape(DEF='SHAPE_ELEVATIONGRID',
          geometry=ElevationGrid(DEF='ELEVATIONGRID',height=[1.0,2.0,3.0,4.0]),
          appearance=Appearance(USE='APPEARANCE')),
        Shape(DEF='SHAPE_EXTRUSION',
          geometry=Extrusion(DEF='EXTRUSION',crossSection=[(1.0,1.0),(1.0,-1.0),(-1.0,-1.0),(-1.0,1.0),(1.0,1.0)],scale=[(1.0,1.0),(1.0,1.0)],spine=[(0.0,0.0,0.0),(0.0,1.0,0.0)]),
          appearance=Appearance(USE='APPEARANCE'))]),
      Switch(DEF='SWITCH',whichChoice=-1,
        children=[
        Shape(DEF='SHAPE_TEXTURETRANSFORM_INDEXEDFACESET',
          geometry=IndexedFaceSet(DEF='INDEXEDFACESET',colorIndex=[0,1,0,1],coordIndex=[0,1,2,3],normalIndex=[0,1,2,3],texCoordIndex=[0,1,2,3],
            color=Color(DEF='COLOR',color=[(1.0,0.0,0.0),(0.0,1.0,0.0)]),
            coord=Coordinate(DEF='COORDINATE',point=[(1.0,0.0,0.0),(0.0,1.0,0.0),(0.0,0.0,1.0),(1.0,1.0,1.0)]),
            normal=Normal(DEF='NORMAL',vector=[(1.0,0.0,0.0),(0.0,1.0,0.0),(0.0,0.0,1.0),(0.0,0.0,1.0)]),
            texCoord=TextureCoordinate(DEF='TEXTURECOORDINATE',point=[(0.1,0.1),(0.9,0.1),(0.9,0.9),(0.1,0.9)])),
          appearance=Appearance(DEF='APPEARANCE_TEXTURETRANSFORM',
            texture=ImageTexture(USE='IMAGETEXTURE'),
            material=Material(),
            textureTransform=TextureTransform(DEF='TEXTURETRANSFORM',center=(0.5,0.5)))),
        Shape(DEF='SHAPE_INDEXEDLINESET',
          geometry=IndexedLineSet(DEF='INDEXEDLINESET',colorIndex=[0,1,0,1],coordIndex=[0,1,2,3],
            coord=Coordinate(USE='COORDINATE'),
            color=Color(USE='COLOR')),
          appearance=Appearance(USE='APPEARANCE')),
        Shape(DEF='SHAPE_POINTSET',
          geometry=PointSet(DEF='POINTSET',
            color=Color(USE='COLOR'),
            coord=Coordinate(USE='COORDINATE')),
          appearance=Appearance(USE='APPEARANCE')),
        Shape(DEF='SHAPE_MOVIETEXTURE',
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
            coord=Coordinate(point=[(0.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,0.0),(0.0,1.0,0.0)])),
          appearance=Appearance(),)]),
      Transform(DEF='TRANSFORM',
        children=[
        Shape(DEF='SHAPE_SPHERE',
          geometry=Sphere(DEF='SPHERE'),
          appearance=Appearance(USE='APPEARANCE')),
        Shape(DEF='SHAPE_TEXT',
          geometry=Text(DEF='TEXT',string=[" first line of text","second line of text"],
            fontStyle=FontStyle(DEF='FONTSTYLE')),
          appearance=Appearance(USE='APPEARANCE'))]),
      Sound(DEF='SOUND',
        source=AudioClip(DEF='AUDIOCLIP',description='AudioClip')),
      Group(DEF='GROUP_LIGHTS',
        children=[
        DirectionalLight(DEF='DIRECTIONALLIGHT'),
        PointLight(DEF='POINTLIGHT'),
        SpotLight(DEF='SPOTLIGHT',beamWidth=1.570796,cutOffAngle=.785398)]),
      Group(DEF='GROUP_INTERPOLATORS',
        children=[
        ColorInterpolator(DEF='COLORINTERPOLATOR',key=[0.0],keyValue=[(0.0,0.0,0.0)]),
        CoordinateInterpolator(DEF='COORDINATEINTERPOLATOR',key=[0.0],keyValue=[(0.0,0.0,0.0)]),
        NormalInterpolator(DEF='NORMALINTERPOLATOR',key=[0.0],keyValue=[(0.0,0.0,0.0)]),
        OrientationInterpolator(DEF='ORIENTATIONINTERPOLATOR',key=[0.0],keyValue=[(0.0,0.0,1.0,0.0)]),
        PositionInterpolator(DEF='POSITIONINTERPOLATOR',key=[0.0],keyValue=[(0.0,0.0,0.0)]),
        ScalarInterpolator(DEF='SCALARINTERPOLATOR',key=[0.0],keyValue=[0.0])]),
      Group(DEF='GROUP_SENSORS',
        children=[
        CylinderSensor(DEF='CYLINDERSENSOR'),
        PlaneSensor(DEF='PLANESENSOR'),
        ProximitySensor(DEF='PROXIMITYSENSOR'),
        SphereSensor(DEF='SPHERESENSOR'),
        TimeSensor(DEF='TIMESENSOR'),
        TouchSensor(DEF='TOUCHSENSOR'),
        VisibilitySensor(DEF='VISIBILITYSENSOR')])]),
    WorldInfo(DEF='Xj3D_NODE_TRANSLATION_STATUS'),
    ROUTE(fromField='isActive',fromNode='TOUCHSENSOR',toField='enabled',toNode='TOUCHSENSOR')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AllVrml97Nodes.py")
