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
    meta(content='TextureAngleViewer.x3d',name='title'),
    meta(content='View a given texture from different angles to judge readability, example use is a QR code.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='23 April 2013',name='created'),
    meta(content='20 April 2020',name='modified'),
    meta(content='color mapper in scene for varying Background contrast',name='TODO'),
    meta(content='second X-axis angle slider',name='TODO'),
    meta(content='TextureAngleViewer36degrees.png',name='Image'),
    meta(content='images/QrNpsEduCode.png',name='Image'),
    meta(content='http://qr.nps.edu',name='reference'),
    meta(content='https://zxing.appspot.com/generator',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/TextureAngleViewer.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ================================ 
    children=[
    WorldInfo(title='Texture Angle Viewer'),
    Background(skyColor=[(0.72549,1,0.721569)]),
    Viewpoint(description='Texture angle viewer',position=(0,0,11)),
    NavigationInfo(DEF='NavigationInfoFinal',type=["NONE"]),
    #  <NavigationInfo DEF='NavigationInfoDebug' type='"EXAMINE" "ANY"'/> 
    #  ================================ 
    Transform(translation=(0,3.6,0),
      children=[
      Shape(
        geometry=Text(DEF='AngleOutputText',string=["Texture angle viewer"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.4,0.8))))]),
    #  ================================ 
    Anchor(description='this QR code links to http://qr.nps.edu',url=["http://qr.nps.edu"],
      children=[
      Transform(DEF='ImageTransform',
        children=[
        Shape(
          #  TODO add a single geometry node here 
          geometry=IndexedFaceSet(coordIndex=[1,0,2,3,0,-1],
            coord=Coordinate(point=[(-3,-3,0),(3,-3,0),(3,3,0),(-3,3,0),(-3,-3,0)])),
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["images/QrNpsEduCode.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/images/QrNpsEduCode.png"])))])]),
    #  ================================ 
    Transform(DEF='SliderSituated',translation=(0,-3.6,0),
      children=[
      Transform(DEF='SliderKnobTransform',
        children=[
        PlaneSensor(DEF='SliderPlaneSensor',description='select and drag to change angle values',maxPosition=(3,0),minPosition=(-3,0)),
        Transform(rotation=(0,0,1,1.570796),
          children=[
          Shape(
            geometry=Cylinder(DEF='SliderKnob',height=0.2,radius=0.2),
            appearance=Appearance(DEF='Metals13Appearance',
              material=Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0),specularColor=(0.882653,0.860832,0.687861),
                #  Universal Media Library: Metals 13 
                )))])]),
      #  SliderBar does not rotate or drag with SliderKnob 
      Transform(DEF='SliderBar',rotation=(0,0,1,1.570796),
        children=[
        Shape(
          geometry=Cylinder(height=6,radius=0.05),
          appearance=Appearance(USE='Metals13Appearance'))])]),
    #  ================================ 
    Script(DEF='SliderScript',
      field=[
      field(accessType='inputOnly',appinfo='input provided by SliderKnobTransform PlaneSensor output',name='set_translation',type='SFVec3f'),
      field(accessType='initializeOnly',name='angle',type='SFFloat',value=0.0),
      field(accessType='initializeOnly',name='y',type='SFFloat',value=0.0),
      field(accessType='outputOnly',appinfo='output provided for ImageTransform rotation',name='rotation_changed',type='SFRotation'),
      #  Note that trackPoint_changed events represent unclamped intersection points on plane surface. Browsers can interpret drags off of the surface in various ways. Note that translation_changed events are clamped by minPosition/maxPosition and thus may be preferable. 
      field(accessType='outputOnly',appinfo='output provided for SliderKnobTransform translation',name='translation_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='output provided for degrees of rotation in Text node',name='angleMFString_changed',type='MFString'),
      field(accessType='initializeOnly',appinfo='console output for debugging',name='tracePrint',type='SFBool',value=True)]),
    ROUTE(fromField='translation_changed',fromNode='SliderPlaneSensor',toField='set_translation',toNode='SliderScript'),
    ROUTE(fromField='translation_changed',fromNode='SliderScript',toField='translation',toNode='SliderKnobTransform'),
    ROUTE(fromField='rotation_changed',fromNode='SliderScript',toField='rotation',toNode='ImageTransform'),
    ROUTE(fromField='angleMFString_changed',fromNode='SliderScript',toField='string',toNode='AngleOutputText')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextureAngleViewer.py")
