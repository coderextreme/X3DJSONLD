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
    meta(content='SweetHome.x3d',name='title'),
    meta(content='La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001]',name='creator'),
    meta(content='Engin UZUNCAOVA',name='translator'),
    meta(content='16 September 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Model of one of the housing types in La Mesa Housing Area.The model is mostly in scale.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SweetHome.x3d'),
    NavigationInfo(type=["EXAMINE"]),
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_3_back.jpg","ocean_3_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","ocean_3_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_3_front.jpg","ocean_3_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_3_left.jpg","ocean_3_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_3_right.jpg","ocean_3_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"],skyAngle=[0.1,0.15,1.309,1.571],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/ocean_3_top.jpg","ocean_3_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"]),
    Viewpoint(description='FRONT SIDE',orientation=(-1,0.02,0,0.25),position=(0,3,20)),
    Viewpoint(description='LEFT SIDE',orientation=(-0.12,-0.99,-0.12,1.58),position=(-20,3,0)),
    Viewpoint(description='BACK SIDE',orientation=(-0,0.99,0.12,3.14),position=(0,5,-20)),
    Viewpoint(description='RIGHT SIDE',orientation=(-0.12,0.99,0.12,1.58),position=(20,3,0)),
    Viewpoint(description='WALKING',position=(2,1.7,10)),
    LOD(range=[15],
      children=[
      Inline(url=["SweetHomeFullDetail.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.wrl","SweetHomeFullDetail.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d"]),
      Inline(url=["SweetHomeLowDetail.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.wrl","SweetHomeLowDetail.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d"])]),
    Group(DEF='FENCE_STRUCT',
      children=[
      Transform(DEF='FENCE',translation=(-8.26,1.05,-3.0),
        children=[
        Transform(DEF='BOTTOM',translation=(0.905,-0.895,0.0),
          children=[
          Shape(
            appearance=Appearance(DEF='BOTTOM_COLOR',
              texture=ImageTexture(DEF='woodTexture',url=["woodTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/woodTexture.jpg"]),
              material=Material(diffuseColor=(1.0,0.6,0.2))),
            geometry=Box(size=(1.96,0.3,0.03)))]),
        Transform(DEF='POST',translation=(1.96,-0.05,0.0),
          children=[
          Shape(
            appearance=Appearance(USE='BOTTOM_COLOR'),
            geometry=Box(size=(0.15,2.0,0.15)))]),
        Group(DEF='FENCE1',
          children=[
          Shape(
            appearance=Appearance(DEF='WOOD_COLOR1',
              texture=ImageTexture(USE='woodTexture'),
              material=Material(diffuseColor=(1.0,0.6,0.2))),
            geometry=Box(size=(0.16,1.5,0.05))),
          Transform(translation=(0,0.749,0),
            children=[
            Shape(DEF='TOP1',
              appearance=Appearance(USE='WOOD_COLOR1'),
              geometry=Extrusion(ccw=False,crossSection=[(0.08,0.025),(0.08,-0.025),(-0.08,-0.025),(-0.08,0.025),(0.08,0.025)],scale=[(1.0,1.0),(0.01,1.0)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.1,0.0)]))])]),
        Transform(translation=(0.16,0.0,0.0),
          children=[
          Group(DEF='FENCE2',
            children=[
            Shape(
              appearance=Appearance(DEF='WOOD_COLOR2',
                texture=ImageTexture(USE='woodTexture'),
                material=Material(diffuseColor=(1.0,0.585,0.2))),
              geometry=Box(size=(0.16,1.5,0.03))),
            Transform(translation=(0,0.749,0),
              children=[
              Shape(DEF='TOP2',
                appearance=Appearance(USE='WOOD_COLOR2'),
                geometry=Extrusion(ccw=False,crossSection=[(0.08,0.015),(0.08,-0.015),(-0.08,-0.015),(-0.08,0.015),(0.08,0.015)],scale=[(1.0,1.0),(0.01,1.0)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.1,0.0)]))])])]),
        Transform(translation=(0.31,0.0,0.0),
          children=[
          Group(USE='FENCE1')]),
        Transform(translation=(0.46,0.0,0.0),
          children=[
          Group(USE='FENCE2')]),
        Transform(translation=(0.61,0.0,0.0),
          children=[
          Group(USE='FENCE1')]),
        Transform(translation=(0.76,0.0,0.0),
          children=[
          Group(USE='FENCE2')]),
        Transform(translation=(0.91,0.0,0.0),
          children=[
          Group(USE='FENCE1')]),
        Transform(translation=(1.06,0.0,0.0),
          children=[
          Group(USE='FENCE2')]),
        Transform(translation=(1.21,0.0,0.0),
          children=[
          Group(USE='FENCE1')]),
        Transform(translation=(1.36,0.0,0.0),
          children=[
          Group(USE='FENCE2')]),
        Transform(translation=(1.51,0.0,0.0),
          children=[
          Group(USE='FENCE1')]),
        Transform(translation=(1.66,0.0,0.0),
          children=[
          Group(USE='FENCE2')]),
        Transform(translation=(1.81,0.0,0.0),
          children=[
          Group(USE='FENCE1')])]),
      Transform(DEF='FENCE_ROTATE1',center=(-6.3,0.0,-3.0),rotation=(0,1,0,-1.57),translation=(-2.1,0.0,0.0),
        children=[
        Transform(USE='FENCE')]),
      Transform(translation=(0.0,0.0,-1.96),
        children=[
        Transform(USE='FENCE_ROTATE1')]),
      Transform(translation=(0.0,0.0,-3.92),
        children=[
        Transform(USE='FENCE_ROTATE1')]),
      Transform(translation=(0.0,0.0,-5.88),
        children=[
        Transform(USE='FENCE_ROTATE1')]),
      Transform(DEF='FENCE_ROTATE2',center=(-6.3,0.0,-6.86),rotation=(0,1,0,-1.57),translation=(1.75,0.0,-2.03),
        children=[
        Transform(USE='FENCE_ROTATE1')]),
      Transform(translation=(1.96,0.0,0.0),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(translation=(3.92,0.0,0.0),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(translation=(5.88,0.0,0.0),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(translation=(7.84,0.0,0.0),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(translation=(9.8,0.0,0.0),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(translation=(11.76,0.0,0.0),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(DEF='FENCE_ROTATE3',center=(-1.5,0.0,-4.2),rotation=(0,1,0,-1.57),translation=(0.17,0.0,0.11),
        children=[
        Transform(USE='FENCE_ROTATE2')]),
      Transform(translation=(0.0,0.0,2.07),
        children=[
        Transform(USE='FENCE_ROTATE3')]),
      Transform(rotation=(0,1,0,0.04),translation=(0.45,0.0,4.38),
        children=[
        Transform(USE='FENCE_ROTATE3')])]),
    Transform(DEF='LAWN',scale=(2,1,4),translation=(0,0.01,0),
      children=[
      Transform(scale=(2,1,2),translation=(-9,0.1,-6),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["lawnGrass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/lawnGrass.jpg"]),
            textureTransform=TextureTransform(scale=(160,80))),
          geometry=ElevationGrid(creaseAngle=0.785,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],xDimension=8,xSpacing=1.4285714,zDimension=8,zSpacing=0.7142857))])]),
    Transform(DEF='TREE',translation=(-2.0,0.0,8.0),
      children=[
      Shape(DEF='HALF_TREE',
        appearance=Appearance(
          texture=ImageTexture(url=["tree1.png","https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/tree1.png"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
          coord=Coordinate(point=[(-1.51,0,0),(1.51,0,0),(1.51,3,0),(-1.51,3,0)]))),
      Transform(rotation=(0,1,0,1.57),
        children=[
        Shape(USE='HALF_TREE')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SweetHome.py")
