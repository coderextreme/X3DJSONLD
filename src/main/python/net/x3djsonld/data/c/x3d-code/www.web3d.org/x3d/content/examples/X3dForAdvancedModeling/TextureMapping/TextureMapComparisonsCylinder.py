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
    meta(content='TextureMapComparisonsCylinder.x3d',name='title'),
    meta(content='Compare ImageTexture mapping for a variety of geometry nodes. This is an excellent test scene for different X3D browsers.',name='description'),
    meta(content='Sungmin Kwon and Don Brutzman',name='creator'),
    meta(content='17 December 2017',name='created'),
    meta(content='21 January 2020',name='modified'),
    meta(content='TextureMapTesting.pdf',name='reference'),
    meta(content='TextureMapComparisonsCylinderX_ITE.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderX3DOM.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderBSContact.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderFreeWrl.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderH3DViewer.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderInstantReality.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderView3dScene.png',name='Image'),
    meta(content='TextureMapComparisonsCylinderXj3D.png',name='Image'),
    meta(content='TextureMapComparisonsRectangle.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Images',name='reference'),
    meta(content='X3D Abstract Specification, 18.2.3 Texture coordinates',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#Texturecoordinates',name='specificationUrl'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Images/ImageTexture.gif',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/TextureMapComparisonsCylinder.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextureMapComparisonsCylinder.x3d'),
    Viewpoint(DEF='Viewpoint1',description='default view',position=(0,0,21)),
    #  == === ==== 1st row 
    Transform(translation=(0,0.2,0),
      #  Cylinder 
      children=[
      Transform(translation=(0,3,0),
        children=[
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureAppearance',
              texture=ImageTexture(DEF='SpecificationTexture',url=["ImageTextureSpecificationSquare.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/ImageTextureSpecificationSquare.png"])),
            geometry=Cylinder(),)]),
        #  Indexed Face Set 
        Transform(translation=(-3.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureAppearance'),
            geometry=IndexedFaceSet(DEF='BaseIFS',coordIndex=[0,1,9,8,-1,1,2,10,9,-1,2,3,11,10,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,0,8,15,-1,8,9,17,16,-1,9,10,18,17,-1,10,11,19,18,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,8,16,23,-1],
              coord=Coordinate(DEF='CsForCylinder',point=[(0,-1,1),(0.707,-1,0.707),(1,-1,0),(0.707,-1,-0.707),(0,-1,-1),(-0.707,-1,-0.707),(-1,-1,0),(-0.707,-1,0.707),(0,0.5,1),(0.707,0.5,0.707),(1,0.5,0),(0.707,0.5,-0.707),(0,0.5,-1),(-0.707,0.5,-0.707),(-1,0.5,0),(-0.707,0.5,0.707),(0,1,1),(0.707,1,0.707),(1,1,0),(0.707,1,-0.707),(0,1,-1),(-0.707,1,-0.707),(-1,1,0),(-0.707,1,0.707)])))]),
        #  Indexed Triangle Strip Set 
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureAppearance'),
            geometry=IndexedTriangleStripSet(DEF='BaseITSS',ccw=True,colorPerVertex=True,index=[8,0,9,1,10,2,11,3,12,4,13,5,14,6,15,7,8,0,-1,16,8,17,9,18,10,19,11,20,12,21,13,22,14,23,15,16,8,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(USE='CsForCylinder')))]),
        #  Extrusion 
        Transform(translation=(1.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureAppearance'),
            geometry=Extrusion(DEF='BaseExtrusionShape',crossSection=[(0,-1),(-0.707,-0.707),(-1,0),(-0.707,0.707),(0,1),(0.707,0.707),(1,0),(0.707,-0.707),(0,-1)],spine=[(0,-1,0),(0,0.5,0),(0,1,0)],
              #  spine is open, crossSection is closed 
              ))])]),
      #  == === ==== 2nd row 
      #  Cylinder 
      Transform(translation=(0,0.5,0),
        children=[
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureRotate',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(rotation=0.8)),
            geometry=Cylinder(),)]),
        #  Indexed Face Set 
        Transform(translation=(-3.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=IndexedFaceSet(USE='BaseIFS'))]),
        #  Indexed Triangle Strip Set 
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=IndexedTriangleStripSet(USE='BaseITSS',ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True))]),
        #  Extrusion 
        Transform(translation=(1.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=Extrusion(USE='BaseExtrusionShape'))])]),
      #  == === ==== 3rd row 
      #  Cylinder 
      Transform(translation=(0,-2,0),
        children=[
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureTranslate',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(rotation=0.8,translation=(0.2,-0.5))),
            geometry=Cylinder(),)]),
        #  Indexed Face Set 
        Transform(translation=(-3.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTranslate'),
            geometry=IndexedFaceSet(USE='BaseIFS'))]),
        #  Indexed Triangle Strip Set 
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTranslate'),
            geometry=IndexedTriangleStripSet(USE='BaseITSS',ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True))]),
        #  Extrusion 
        Transform(translation=(1.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTranslate'),
            geometry=Extrusion(USE='BaseExtrusionShape'))])]),
      #  == === ==== 4th row 
      #  Cylinder 
      Transform(translation=(0,-4.5,0),
        children=[
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureScale',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(rotation=0.8,scale=(2,2),translation=(0.2,-0.5))),
            geometry=Cylinder(),)]),
        #  Indexed Face Set 
        Transform(translation=(-3.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=IndexedFaceSet(USE='BaseIFS'))]),
        #  Indexed Triangle Strip Set 
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=IndexedTriangleStripSet(USE='BaseITSS',ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True))]),
        #  Extrusion 
        Transform(translation=(1.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=Extrusion(USE='BaseExtrusionShape'))])]),
      #  == === ==== 5th row 
      #  Cylinder 
      Transform(translation=(0,-7,0),
        children=[
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='AppearanceNoTexture',
              material=Material(diffuseColor=(0.6,1,1))),
            geometry=Cylinder(),)]),
        #  Indexed Face Set 
        Transform(translation=(-3.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=IndexedFaceSet(coordIndex=[0,1,9,8,-1,1,2,10,9,-1,2,3,11,10,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,0,8,15,-1,8,9,17,16,-1,9,10,18,17,-1,10,11,19,18,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,8,16,23,-1],
              coord=Coordinate(USE='CsForCylinder')))]),
        #  Indexed Triangle Strip Set 
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[8,0,9,1,10,2,11,3,12,4,13,5,14,6,15,7,8,0,-1,16,8,17,9,18,10,19,11,20,12,21,13,22,14,23,15,16,8,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(USE='CsForCylinder')))]),
        #  Extrusion 
        Transform(translation=(1.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=Extrusion(USE='BaseExtrusionShape'))])]),
      #  == === ==== Text 
      #  Title 
      Transform(translation=(0,7,0),
        children=[
        Shape(
          geometry=Text(DEF='Title',string=["Texture Map Comparisons for Cylinders!"],
            fontStyle=FontStyle(justify=["MIDDLE","FIRST"])),
          appearance=Appearance(DEF='DefaultAppearance',
            material=Material(DEF='DefaultMaterial')))]),
      #  X axis : Geometry Index 
      Transform(translation=(0,5.2,0),
        #  Cylinder 
        children=[
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Text(string=["Cylinder"],
              fontStyle=FontStyle(DEF='CenterFontStyle',justify=["MIDDLE","MIDDLE"],size=0.75,style_='BOLD')))]),
        #  Indexed Face Set 
        Transform(translation=(-3.5,0,0),
          children=[
          Shape(
            geometry=Text(string=["IFS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  Indexed Triangle Strip Set 
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            geometry=Text(string=["ITSS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  Extrusion 
        Transform(translation=(1.5,0,0),
          children=[
          Shape(
            geometry=Text(string=["Extrusion"],
              fontStyle=FontStyle(USE='CenterFontStyle')))])]),
      #  Y axis : Texture Description 
      Transform(translation=(3,3.5,0),
        children=[
        Transform(
          children=[
          Shape(
            geometry=Text(string=["Default Texture"],
              fontStyle=FontStyle(DEF='LeftFontStyle',justify=["BEGIN","MIDDLE"],size=0.75)))]),
        Transform(translation=(0,-2.5,0),
          children=[
          Shape(
            geometry=Text(string=["Rotate Texture"],
              fontStyle=FontStyle(USE='LeftFontStyle')))]),
        Transform(translation=(0,-5,0),
          children=[
          Shape(
            geometry=Text(string=["Rotate, Translate Texture"],
              fontStyle=FontStyle(USE='LeftFontStyle')))]),
        Transform(translation=(0,-7.5,0),
          children=[
          Shape(
            geometry=Text(string=["Rotate, Translate, Scale"],
              fontStyle=FontStyle(USE='LeftFontStyle')))]),
        Transform(translation=(0,-10,0),
          children=[
          Shape(
            geometry=Text(string=["No Texture"],
              fontStyle=FontStyle(USE='LeftFontStyle')),
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,1,1))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextureMapComparisonsCylinder.py")
