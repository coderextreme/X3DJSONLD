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
    meta(content='MovieTextureAuthoringOptions.x3d',name='title'),
    meta(content='Provide examples of helpful MovieTexture usage',name='description'),
    meta(content='Don Brutzman and MV3204 class',name='creator'),
    meta(content='21 August 2008',name='created'),
    meta(content='10 June 2021',name='modified'),
    meta(content='MovieTexture examples',name='subject'),
    meta(content='MovieTextureFigure.png',name='Image'),
    meta(content='MovieTextureAuthoringOptions.png',name='Image'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/MovieTextureAuthoringOptions.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MovieTextureAuthoringOptions.x3d'),
    Viewpoint(description='MovieTexture authoring options',position=(0,0,18)),
    Group(DEF='TopGroupTextures',
      #  First row: standard definition 
      children=[
      Transform(translation=(-6,3,0),
        #  Flat-surface movie, with fixed position and orientation 
        children=[
        Viewpoint(description='Movie #1, standard definition',position=(0,0,5)),
        Shape(DEF='MovieShapeStandardDefinition',
          geometry=IndexedFaceSet(DEF='Quadrilateral320x240',coordIndex=[0,1,2,3],solid=False,
            coord=Coordinate(point=[(-1.6,-1.2,0),(1.6,-1.2,0),(1.6,1.2,0),(-1.6,1.2,0)]),
            texCoord=TextureCoordinate(DEF='FullImageMapping',point=[(0,0),(1,0),(1,1),(0,1)])),
          appearance=Appearance(
            texture=MovieTexture(DEF='X3dQuipMovieStandardDefinition',description='click to start movie, standard definition',repeatS=False,repeatT=False,url=["X3dQuipBrutzmanStandardDefinitionMPEG1.mpg","X3dQuipBrutzmanStandardDefinitionMPEG1.mov","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionMPEG1.mpg","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionMPEG1.mov"])))]),
      Transform(translation=(0,3,0),
        #  movie under a Billboard to always face user 
        children=[
        Viewpoint(description='Billboarded movie #2 offset view location, standard definition',orientation=(0,1,0,0.8),position=(4,0,4)),
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(USE='MovieShapeStandardDefinition')])]),
      TouchSensor(DEF='MovieTouchStandardDefinition',description='click to start movie, standard definition'),
      ROUTE(fromField='touchTime',fromNode='MovieTouchStandardDefinition',toField='startTime',toNode='X3dQuipMovieStandardDefinition')]),
    Transform(DEF='TopGroupTextureLaunch',translation=(6,3,0),
      #  Launch movie into external browser 
      children=[
      Viewpoint(description='Image #3 launches movie externally, standard definition',position=(0,0,5)),
      Anchor(description='Click to launch in external browser, standard definition',parameter=["target=_blank"],url=["X3dQuipBrutzmanStandardDefinitionMPEG1.mpg","X3dQuipBrutzmanStandardDefinitionMPEG1.mov","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionMPEG1.mpg","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionMPEG1.mov"],
        children=[
        Shape(
          geometry=IndexedFaceSet(USE='Quadrilateral320x240'),
          appearance=Appearance(
            texture=ImageTexture(repeatS=False,repeatT=False,url=["X3dQuipBrutzmanStandardDefinitionInitialFrame.png","X3dQuipBrutzmanStandardDefinitionInitialFrame.gif","X3dQuipBrutzmanStandardDefinitionInitialFrame.jpg","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionInitialFrame.png","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionInitialFrame.gif","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanStandardDefinitionInitialFrame.jpg"])))])]),
    Transform(DEF='CenterGroupText',translation=(0,0.25,0),
      #  Text descriptions for user 
      children=[
      Transform(translation=(-6,0,0),
        children=[
        Shape(
          geometry=Text(string=["Select to run","MovieTexture"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(DEF='TextAppearance',
            material=Material(diffuseColor=(0,0.7,0.7))))]),
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["Billboarded"  "MovieTexture"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(USE='TextAppearance'))]),
      Transform(translation=(6,0,0),
        children=[
        Shape(
          geometry=Text(string=["Select image","to launch"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(USE='TextAppearance'))])]),
    Group(DEF='BottomGroupTextures',
      #  Third row: high definition 
      children=[
      Transform(translation=(-6,-3,0),
        children=[
        Viewpoint(description='Movie #4, high definition',position=(0,0,5)),
        Shape(DEF='MovieShapeHighDefinition',
          geometry=IndexedFaceSet(DEF='Quadrilateral480x270',coordIndex=[0,1,2,3],solid=False,
            coord=Coordinate(point=[(-2.4,-1.35,0),(2.4,-1.35,0),(2.4,1.35,0),(-2.4,1.35,0)]),
            texCoord=TextureCoordinate(USE='FullImageMapping')),
          appearance=Appearance(
            texture=MovieTexture(DEF='X3dQuipMovieHighDefinition',description='click to start movie, high definition',repeatS=False,repeatT=False,url=["X3dQuipBrutzmanH264MPEG1Mash.mpg","X3dQuipBrutzmanH264.mov","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264MPEG1Mash.mpg","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264.mov"])))]),
      Transform(translation=(0,-3,0),
        #  movie under a Billboard to always face user 
        children=[
        Viewpoint(description='Billboarded movie #5 offset view location, high definition',orientation=(0,1,0,0.8),position=(4,0,4)),
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(USE='MovieShapeHighDefinition')])]),
      TouchSensor(DEF='MovieTouchHighDefinition',description='click to start movie, high definition'),
      ROUTE(fromField='touchTime',fromNode='MovieTouchHighDefinition',toField='startTime',toNode='X3dQuipMovieHighDefinition')]),
    Transform(DEF='BottomGroupTextureLaunch',translation=(6,-3,0),
      #  Launch movie into external browser 
      children=[
      Viewpoint(description='Image #6 launches movie externally, high definition',position=(0,0,5)),
      Anchor(description='Click to launch in external browser, high definition',parameter=["target=_blank"],url=["X3dQuipBrutzmanH264MPEG1Mash.mpg","X3dQuipBrutzmanH264.mov","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264MPEG1Mash.mpg","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264.mov"],
        children=[
        Shape(
          geometry=IndexedFaceSet(USE='Quadrilateral480x270'),
          appearance=Appearance(
            texture=ImageTexture(repeatS=False,repeatT=False,url=["X3dQuipBrutzmanH264InitialFrame.png","X3dQuipBrutzmanH264InitialFrame.gif","X3dQuipBrutzmanH264InitialFrame.jpg","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264InitialFrame.png","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264InitialFrame.gif","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/X3dQuipBrutzmanH264InitialFrame.jpg"])))])]),
    Transform(DEF='Backdrop',translation=(0,0,-3),
      children=[
      Shape(
        geometry=Box(size=(22,16,0.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.501961,0.27451))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MovieTextureAuthoringOptions.py")
