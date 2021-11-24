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
    meta(content='all_complex_movietexture.x3d',name='title'),
    meta(content='all_complex_movietexture-front.jpg',name='Image'),
    meta(content='all_complex_movietexture-rear.jpg',name='Image'),
    meta(content='all_complex_movietexture-top.jpg',name='Image'),
    meta(content='all_complex_movietexture-bottom.jpg',name='Image'),
    meta(content='all_complex_movietexture-left.jpg',name='Image'),
    meta(content='all_complex_movietexture-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test scale, transform rotation and center of MovieTexture TextureTransform. Test browser ability to apply a +90 degree rotation, with a center of 1 3, a scale of .33 1, and a translation of 0 4.9 to a MovieTexture mapped to the faces of complex geometry. The result is using default complex geometry mapping rules (for the bottom face of the ElevationGrid, the side and bottom end cap of the Extrusion, and the front of the IndexedFaceSet) The geometry faces should map a single, centered V that is 3 times wider than its height, oriented down for its horizontal axis, and right for its vertical axis. Opposite geometry faces should show reversed mapping, and side faces for the IndexedFaceSet should show smeared end pixels of the front and back faces.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/all_complex_movietexture.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='all_complex_movietexture.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,15)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-15)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,15,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-15,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(15,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-15,0,0))]),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    DirectionalLight(direction=(0,0,1),intensity=0.5),
    DirectionalLight(intensity=0.5),
    Transform(translation=(-5,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=MovieTexture(DEF='MYMOVIE',loop=True,url=["vts.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.mpg"]),
          textureTransform=TextureTransform(center=(1,3),rotation=1.57,scale=(0.33,1),translation=(0,4.9)),
          material=Material(),),
        geometry=ElevationGrid(height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0233242,0.0461275,0.0679003,0.0881563,0.106443,0.122352,0.135528,0.145676,0.152571,0.156057,0.156057,0.152571,0.145676,0.135528,0.122352,0.106443,0.0881566,0.0679006,0.0461278,0.0233246,0,0.0461275,0.0912245,0.134284,0.174343,0.210508,0.241971,0.268028,0.288098,0.301733,0.308627,0.308627,0.301733,0.288099,0.268029,0.241971,0.210509,0.174344,0.134284,0.0912253,0.0461283,0,0.0679003,0.134284,0.197668,0.256636,0.309871,0.356185,0.394542,0.424085,0.444155,0.454304,0.454304,0.444155,0.424085,0.394542,0.356185,0.309872,0.256637,0.197669,0.134285,0.0679015,0,0.0881563,0.174343,0.256636,0.333195,0.402312,0.462442,0.512241,0.550598,0.576656,0.589832,0.589832,0.576656,0.550599,0.512242,0.462443,0.402313,0.333197,0.256637,0.174345,0.0881578,0,0.106443,0.210508,0.309871,0.402312,0.485766,0.558369,0.618498,0.664812,0.696275,0.712184,0.712184,0.696275,0.664813,0.618499,0.55837,0.485767,0.402314,0.309873,0.21051,0.106445,0,0.122352,0.241971,0.356185,0.462442,0.558369,0.641823,0.710939,0.764175,0.80034,0.818627,0.818627,0.800341,0.764176,0.710941,0.641824,0.55837,0.462444,0.356187,0.241973,0.122354,0,0.135528,0.268028,0.394542,0.512241,0.618498,0.710939,0.787499,0.846468,0.886527,0.906783,0.906784,0.886528,0.846468,0.7875,0.710941,0.6185,0.512243,0.394544,0.268031,0.13553,0,0.145676,0.288098,0.424085,0.550598,0.664812,0.764175,0.846468,0.909852,0.952911,0.974684,0.974684,0.952911,0.909852,0.846469,0.764177,0.664814,0.5506,0.424087,0.288101,0.145679,0,0.152571,0.301733,0.444155,0.576656,0.696275,0.80034,0.886527,0.952911,0.998008,1.02081,1.02081,0.998009,0.952912,0.886529,0.800342,0.696277,0.576658,0.444158,0.301736,0.152573,0,0.156057,0.308627,0.454304,0.589832,0.712184,0.818627,0.906783,0.974684,1.02081,1.04414,1.04414,1.02081,0.974685,0.906785,0.818629,0.712186,0.589834,0.454306,0.30863,0.156059,0,0.156057,0.308627,0.454304,0.589832,0.712184,0.818627,0.906784,0.974684,1.02081,1.04414,1.04414,1.02081,0.974685,0.906785,0.818629,0.712186,0.589834,0.454306,0.30863,0.156059,0,0.152571,0.301733,0.444155,0.576656,0.696275,0.800341,0.886528,0.952911,0.998009,1.02081,1.02081,0.998009,0.952912,0.886529,0.800342,0.696277,0.576658,0.444158,0.301736,0.152573,0,0.145676,0.288099,0.424085,0.550599,0.664813,0.764176,0.846468,0.909852,0.952912,0.974685,0.974685,0.952912,0.909853,0.84647,0.764177,0.664815,0.550601,0.424088,0.288101,0.145679,0,0.135528,0.268029,0.394542,0.512242,0.618499,0.710941,0.7875,0.846469,0.886529,0.906785,0.906785,0.886529,0.84647,0.787502,0.710942,0.618501,0.512244,0.394544,0.268031,0.135531,0,0.122352,0.241971,0.356185,0.462443,0.55837,0.641824,0.710941,0.764177,0.800342,0.818629,0.818629,0.800342,0.764177,0.710942,0.641825,0.558372,0.462445,0.356187,0.241974,0.122354,0,0.106443,0.210509,0.309872,0.402313,0.485767,0.55837,0.6185,0.664814,0.696277,0.712186,0.712186,0.696277,0.664815,0.618501,0.558372,0.485769,0.402315,0.309874,0.210511,0.106445,0,0.0881566,0.174344,0.256637,0.333197,0.402314,0.462444,0.512243,0.5506,0.576658,0.589834,0.589834,0.576658,0.550601,0.512244,0.462445,0.402315,0.333198,0.256638,0.174345,0.0881582,0,0.0679006,0.134284,0.197669,0.256637,0.309873,0.356187,0.394544,0.424087,0.444158,0.454306,0.454306,0.444158,0.424088,0.394544,0.356187,0.309874,0.256638,0.19767,0.134286,0.0679018,0,0.0461278,0.0912253,0.134285,0.174345,0.21051,0.241973,0.268031,0.288101,0.301736,0.30863,0.30863,0.301736,0.288101,0.268031,0.241974,0.210511,0.174345,0.134286,0.0912261,0.0461287,0,0.0233246,0.0461283,0.0679015,0.0881578,0.106445,0.122354,0.13553,0.145679,0.152573,0.156059,0.156059,0.152573,0.145679,0.135531,0.122354,0.106445,0.0881582,0.0679018,0.0461287,0.0233251],solid=False,xDimension=21,xSpacing=0.1,zDimension=21,zSpacing=0.1))]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          texture=MovieTexture(USE='MYMOVIE'),
          textureTransform=TextureTransform(center=(1,3),rotation=1.57,scale=(0.33,1),translation=(0,4.9)),
          material=Material(),),
        geometry=Extrusion(crossSection=[(1,-2.44921e-016),(0.932472,-0.361242),(0.739009,-0.673696),(0.445738,-0.895164),(0.0922675,-0.995734),(-0.273664,-0.961825),(-0.602635,-0.798017),(-0.850218,-0.526432),(-0.982973,-0.183749),(-0.982973,0.18375),(-0.850217,0.526433),(-0.602634,0.798018),(-0.273663,0.961826),(0.0922688,0.995734),(0.445739,0.895163),(0.739009,0.673695),(0.932472,0.361241),(1,-2.44921e-016)],orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1)],solid=False))]),
    Transform(scale=(0.615111,0.615111,0.615112),translation=(5,0.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=MovieTexture(USE='MYMOVIE'),
          textureTransform=TextureTransform(center=(1,3),rotation=1.57,scale=(0.33,1),translation=(0,4.9)),
          material=Material(),),
        geometry=IndexedFaceSet(coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],
          coord=Coordinate(point=[(-2,2,1),(-2,-2,1),(2,2,1),(2,-2,1),(2,2,-1),(2,-2,-1),(-2,2,-1),(-2,-2,-1)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for all_complex_movietexture.py")
