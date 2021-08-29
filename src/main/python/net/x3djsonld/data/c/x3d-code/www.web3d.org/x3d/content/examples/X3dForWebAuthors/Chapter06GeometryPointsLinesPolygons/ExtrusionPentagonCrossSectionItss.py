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
    meta(content='ExtrusionPentagonCrossSectionItss.x3d',name='title'),
    meta(content='Comparison of Extrusion, ExtrusionCrossSectionPrototype, ExtrusionCrossSectionITSSPrototype.',name='description'),
    meta(content='Don Brutzman and Sungmin Kwon',name='creator'),
    meta(content='Naval Postgraduate School',name='organization'),
    meta(content='23 October 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Extrusion, ExtrusionCrossSectionPrototype, ExtrusionCrossSectionITSSPrototype',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionPentagonCrossSectionItss.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionPentagonCrossSectionItss.x3d'),
    NavigationInfo(DEF='ExamineMode'),
    NavigationInfo(DEF='FlyPanNavigation',type=["FLY","ANY"]),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Oblique view from above',orientation=(-1,0.015,-0.006,0.78),position=(0.25,14,14)),
    Viewpoint(description='Extrusion Pentagon',orientation=(-1,0,0,0.2),position=(0,4,16)),
    Viewpoint(description='Overhead view',orientation=(1,0,0,-1.57),position=(0,27,0)),
    Background(groundColor=[(0.9,0.9,0.9)],skyColor=[(0.9,0.9,0.9)]),
    #  Title 
    Transform(rotation=(1,0,0,-1.3),translation=(0,2,-9),
      children=[
      Shape(
        geometry=Text(DEF='Title',string=["Comparison of Extrusion Based Structures"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))))]),
    #  Extrusion Node 
    Transform(translation=(-4,0,-4),
      children=[
      Shape(
        geometry=Extrusion(beginCap=False,crossSection=[(-3.5,-1),(-2.1,2.9),(2.2,2.9),(3.6,-1),(0,-3.5),(-3.5,-1)],endCap=False,scale=[(1,1),(1,1),(0.2,0.2)],spine=[(0,0,0),(0,1,0),(0,1.6,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.6,0.5),transparency=0.5))),
      Transform(rotation=(1,0,0,-1.3),translation=(0,0,2.9),
        children=[
        Shape(
          geometry=Text(string=["Extrusion Node"],
            fontStyle=FontStyle(DEF='CenterFontStyle',justify=["MIDDLE","BEGIN"],size=0.6,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))))])]),
    #  ExtrusionCrossSection Prototype Node 
    ExternProtoDeclare(appinfo='Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point',documentation='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.x3d',name='ExtrusionCrossSection',url=["ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"],
      field=[
      field(accessType='initializeOnly',appinfo='Extrusion name',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='crossSection',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='spine',type='MFVec3f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='scale',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='beginCap',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='endCap',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='convex',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='creaseAngle',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Image to apply to Extrusion',name='extrusionImageTexture',type='SFNode'),
      field(accessType='initializeOnly',appinfo='TextureTransform coordinates of image applied to Extrusion',name='extrusionTextureTransform',type='SFNode'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_crossSection',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_spine',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_scale',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Whether to provide initialization trace statements showing node construction',name='traceEnabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='emissiveColor of spine',name='spineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='diffuseColor of crossSection',name='crossSectionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of crossSection',name='crossSectionTransparency',type='SFFloat'),
      field(accessType='inputOutput',appinfo='diffuseColor of extrusion hull',name='extrusionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of extrusion hull',name='extrusionTransparency',type='SFFloat')]),
    Transform(translation=(4,0,-4),
      children=[
      ProtoInstance(DEF='PentagonExtrusion',name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='PentagonExtrusion'),
        fieldValue(name='crossSection',value=[(-3.5,-1),(-2.1,2.9),(2.2,2.9),(3.6,-1),(0,-3.5),(-3.5,-1)]),
        fieldValue(name='spine',value=[(0,0,0),(0,1,0),(0,1.6,0)]),
        fieldValue(name='scale',value=[(1,1),(1,1),(0.2,0.2)]),
        fieldValue(name='creaseAngle',value=3),
        fieldValue(name='ccw',value=True),
        fieldValue(name='spineColor',value=(0.7,0.7,0)),
        fieldValue(name='crossSectionColor',value=(0.6,0.6,0.2)),
        fieldValue(name='extrusionColor',value=(0.2,0.6,0.5)),
        fieldValue(name='extrusionTransparency',value=0.5),
        fieldValue(name='traceEnabled',value=False)]),
      Transform(rotation=(1,0,0,-1.3),translation=(0,0,3),
        children=[
        Shape(
          geometry=Text(string=["ExtrusionCrossSection","Prototype"],
            fontStyle=FontStyle(USE='CenterFontStyle')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))))])]),
    #  ExtrusionCrossSectionITSS Prototype Node 
    ExternProtoDeclare(name='ExtrusionCrossSectionITSS',url=["ExtrusionCrossSectionITSSPrototype.x3d#ExtrusionCrossSectionITSS","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionITSSPrototype.x3d#ExtrusionCrossSectionITSS","ExtrusionCrossSectionITSSPrototype.wrl#ExtrusionCrossSectionITSS","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionITSSPrototype.wrl#ExtrusionCrossSectionITSS"],
      field=[
      field(accessType='initializeOnly',appinfo='Extrusion name',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='crossSection',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='spine',type='MFVec3f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='scale',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='beginCap',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='endCap',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='convex',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='creaseAngle',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Image to apply to Extrusion',name='extrusionImageTexture',type='SFNode'),
      field(accessType='initializeOnly',appinfo='TextureTransform coordinates of image applied to Extrusion',name='extrusionTextureTransform',type='SFNode'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_crossSection',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_spine',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_scale',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Whether to provide initialization trace statements showing node construction',name='traceEnabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='emissiveColor of spine',name='spineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='diffuseColor of crossSection',name='crossSectionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of crossSection',name='crossSectionTransparency',type='SFFloat'),
      field(accessType='inputOutput',appinfo='diffuseColor of extrusion hull',name='extrusionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of extrusion hull',name='extrusionTransparency',type='SFFloat')]),
    Transform(translation=(0,0,3.5),
      children=[
      ProtoInstance(DEF='PentagonExtrusionITSS',name='ExtrusionCrossSectionITSS',
        fieldValue=[
        fieldValue(name='name',value='PentagonExtrusionITSS'),
        fieldValue(name='crossSection',value=[(-3.5,-1),(-2.1,2.9),(2.2,2.9),(3.6,-1),(0,-3.5),(-3.5,-1)]),
        fieldValue(name='spine',value=[(0,0,0),(0,1,0),(0,1.6,0)]),
        fieldValue(name='scale',value=[(1,1),(1,1),(0.2,0.2)]),
        fieldValue(name='ccw',value=True),
        fieldValue(name='spineColor',value=(0.7,0.7,0)),
        fieldValue(name='crossSectionColor',value=(0.6,0.6,0.2)),
        fieldValue(name='extrusionColor',value=(0.2,0.6,0.5)),
        fieldValue(name='extrusionTransparency',value=0.5),
        fieldValue(name='traceEnabled',value=False)]),
      Transform(rotation=(1,0,0,-1.5),translation=(0,0,3.2),
        children=[
        Shape(
          geometry=Text(string=["ExtrusionCrossSectionITSS Prototype"],
            fontStyle=FontStyle(USE='CenterFontStyle')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionPentagonCrossSectionItss.py")
