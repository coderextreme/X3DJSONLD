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
    meta(content='MobiusExtrusion.x3d',name='title'),
    meta(content='Mobius (or Mobius) is a surface with only one side and only one boundary component.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 January 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='MobiusStrip-01.png',name='Image'),
    meta(content='MobiusExtrusionsInternalLighting.png',name='Image'),
    meta(content='properly handle special characters in "Möbius" during catalog creation',name='TODO'),
    meta(content='http://en.wikipedia.org/wiki/M%C3%B6bius_strip',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/MobiusNurbs.x3d',name='reference'),
    meta(content='Mobius strip modeled with Extrusion',name='subject'),
    meta(content='Development of this scene added new features to X3D-Edit',name='info'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/MobiusExtrusion.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  TODO clockwise or counterclockwise 
    children=[
    WorldInfo(title='MobiusExtrusion.x3d'),
    Background(skyColor=[(0,0.6784314,0.8)]),
    Viewpoint(description='Mobius strip extrusion, plus cross-sectional view',orientation=(1,0,0,-0.46365),position=(0,5,10)),
    Viewpoint(description='Mobius strip from above',orientation=(1,0,0,-1.5707999),position=(0,10,0)),
    Viewpoint(description='Mobius strip from side'),
    Transform(DEF='MobiusStrip',scale=(2,2,2),translation=(-3,2,0),
      children=[
      PointLight(DEF='InteriorLight',global_=False),
      Shape(
        geometry=Extrusion(creaseAngle=0.7854,crossSection=[(-0.2,-0.1),(0.2,-0.1),(0.2,0.1),(-0.2,0.1),(-0.2,-0.1)],orientation=[(0,1,0,-1.5707999),(0,1,0,-1.309),(0,1,0,-1.0472),(0,1,0,-0.7854),(0,1,0,-0.5236),(0,1,0,-0.2618),(0,1,0,0),(0,1,0,0.2618),(0,1,0,0.5236),(0,1,0,0.7854),(0,1,0,1.0472),(0,1,0,1.309),(0,1,0,1.5707999),(0,1,0,1.8326),(0,1,0,2.0943999),(0,1,0,2.3562),(0,1,0,2.618),(0,1,0,2.8798001),(0,1,0,3.1415999),(0,1,0,3.4033999),(0,1,0,3.6652),(0,1,0,3.927),(0,1,0,4.1887999),(0,1,0,4.4506001),(0,1,0,4.7124)],solid=False,spine=[(0,0,1),(0.259,0,0.966),(0.5,0,0.866),(0.707,0,0.707),(0.866,0,0.5),(0.966,0,0.259),(1,0,0),(0.966,0,-0.259),(0.866,0,-0.5),(0.707,0,-0.707),(0.5,0,-0.866),(0.259,0,-0.966),(0,0,-1),(-0.259,0,-0.966),(-0.5,0,-0.866),(-0.707,0,-0.707),(-0.866,0,-0.5),(-0.966,0,-0.259),(-1,0,-0),(-0.966,0,0.259),(-0.866,0,0.5),(-0.707,0,0.707),(-0.5,0,0.866),(-0.259,0,0.966),(0,0,1)]),
        #  illustrated by follow-on ExtrusionCrossSection visualization 
        appearance=Appearance(
          material=Material(diffuseColor=(0.4431373,0.1803922,1)),
          #  TODO add ruled ImageTexture 
          ))]),
    ExternProtoDeclare(appinfo='Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point',documentation='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d',name='ExtrusionCrossSection',url=["../../Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection"],
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
      field(accessType='inputOutput',appinfo='emissiveColor of spine',name='spineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='diffuseColor of crossSection',name='crossSectionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of crossSection',name='crossSectionTransparency',type='SFFloat'),
      field(accessType='inputOutput',appinfo='diffuseColor of extrusion hull',name='extrusionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of extrusion hull',name='extrusionTransparency',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Image to apply to Extrusion',name='extrusionImageTexture',type='SFNode'),
      field(accessType='initializeOnly',appinfo='TextureTransform coordinates of image applied to Extrusion',name='extrusionTextureTransform',type='SFNode'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_crossSection',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_spine',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_scale',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Whether to provide initialization trace statements showing node construction',name='traceEnabled',type='SFBool')]),
    Transform(DEF='MobiusStripExploded',scale=(2,2,2),translation=(3,2,0),
      children=[
      PointLight(USE='InteriorLight'),
      #  ==================== 
      Switch(whichChoice=0,
        children=[
        ProtoInstance(name='ExtrusionCrossSection',
          fieldValue=[
          fieldValue(name='name',value='MobiusStrip'),
          fieldValue(name='crossSection',value=[(-0.2,-0.1),(0.2,-0.1),(0.2,0.1),(-0.2,0.1),(-0.2,-0.1)]),
          fieldValue(name='spine',value=[(0,0,1),(0.259,0,0.966),(0.5,0,0.866),(0.707,0,0.707),(0.866,0,0.5),(0.966,0,0.259),(1,0,0),(0.966,0,-0.259),(0.866,0,-0.5),(0.707,0,-0.707),(0.5,0,-0.866),(0.259,0,-0.966),(0,0,-1),(-0.259,0,-0.966),(-0.5,0,-0.866),(-0.707,0,-0.707),(-0.866,0,-0.5),(-0.966,0,-0.259),(-1,0,-0),(-0.966,0,0.259),(-0.866,0,0.5),(-0.707,0,0.707),(-0.5,0,0.866),(-0.259,0,0.966),(0,0,1)]),
          fieldValue(name='scale',value=[(1,1)]),
          fieldValue(name='orientation',value=[(0,1,0,-1.5707999),(0,1,0,-1.309),(0,1,0,-1.0472),(0,1,0,-0.7854),(0,1,0,-0.5236),(0,1,0,-0.2618),(0,1,0,0),(0,1,0,0.2618),(0,1,0,0.5236),(0,1,0,0.7854),(0,1,0,1.0472),(0,1,0,1.309),(0,1,0,1.5707999),(0,1,0,1.8326),(0,1,0,2.0943999),(0,1,0,2.3562),(0,1,0,2.618),(0,1,0,2.8798001),(0,1,0,3.1415999),(0,1,0,3.4033999),(0,1,0,3.6652),(0,1,0,3.927),(0,1,0,4.1887999),(0,1,0,4.4506001),(0,1,0,4.7124)]),
          fieldValue(name='beginCap',value=True),
          fieldValue(name='endCap',value=True),
          fieldValue(name='ccw',value=True),
          fieldValue(name='convex',value=True),
          fieldValue(name='creaseAngle',value=0.524),
          fieldValue(name='solid',value=False),
          fieldValue(name='spineColor',value=(1,0.8,0.0)),
          fieldValue(name='crossSectionColor',value=(0.5,0.5,0.5)),
          fieldValue(name='crossSectionTransparency',value=0.26666668),
          fieldValue(name='extrusionColor',value=(0.8,0.6,0.0)),
          fieldValue(name='extrusionTransparency',value=0.8),
          fieldValue(name='traceEnabled',value=False)])]
        #  Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene 
        #  Example use: https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExample.x3d 
        )]
      #  ==================== 
      ),
    Transform(DEF='UntwistedStrip',scale=(2,2,2),translation=(-3,-2,0),
      children=[
      PointLight(USE='InteriorLight'),
      Shape(
        geometry=Extrusion(creaseAngle=0.524,crossSection=[(-0.2,-0.1),(0.2,-0.1),(0.2,0.1),(-0.2,0.1),(-0.2,-0.1)],solid=False,spine=[(0,0,1),(0.259,0,0.966),(0.5,0,0.866),(0.707,0,0.707),(0.866,0,0.5),(0.966,0,0.259),(1,0,0),(0.966,0,-0.259),(0.866,0,-0.5),(0.707,0,-0.707),(0.5,0,-0.866),(0.259,0,-0.966),(0,0,-1),(-0.259,0,-0.966),(-0.5,0,-0.866),(-0.707,0,-0.707),(-0.866,0,-0.5),(-0.966,0,-0.259),(-1,0,-0),(-0.966,0,0.259),(-0.866,0,0.5),(-0.707,0,0.707),(-0.5,0,0.866),(-0.259,0,0.966),(0,0,1)]),
        #  illustrated by follow-on ExtrusionCrossSection visualization 
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.1490196,0.9411765)),
          #  TODO add ruled ImageTexture 
          ))]),
    Transform(DEF='UntwistedStripExploded',scale=(2,2,2),translation=(3,-2,0),
      children=[
      PointLight(USE='InteriorLight'),
      ProtoInstance(name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='UntwistedStrip'),
        fieldValue(name='crossSection',value=[(-0.2,-0.1),(0.2,-0.1),(0.2,0.1),(-0.2,0.1),(-0.2,-0.1)]),
        fieldValue(name='spine',value=[(0,0,1),(0.259,0,0.966),(0.5,0,0.866),(0.707,0,0.707),(0.866,0,0.5),(0.966,0,0.259),(1,0,0),(0.966,0,-0.259),(0.866,0,-0.5),(0.707,0,-0.707),(0.5,0,-0.866),(0.259,0,-0.966),(0,0,-1),(-0.259,0,-0.966),(-0.5,0,-0.866),(-0.707,0,-0.707),(-0.866,0,-0.5),(-0.966,0,-0.259),(-1,0,-0),(-0.966,0,0.259),(-0.866,0,0.5),(-0.707,0,0.707),(-0.5,0,0.866),(-0.259,0,0.966),(0,0,1)]),
        fieldValue(name='scale',value=[(1,1)]),
        fieldValue(name='beginCap',value=True),
        fieldValue(name='endCap',value=True),
        fieldValue(name='ccw',value=True),
        fieldValue(name='convex',value=True),
        fieldValue(name='creaseAngle',value=0.524),
        fieldValue(name='solid',value=False),
        fieldValue(name='spineColor',value=(1,0.8,0.0)),
        fieldValue(name='crossSectionColor',value=(0,0.1490196,0.9411765)),
        fieldValue(name='crossSectionTransparency',value=0.26666668),
        fieldValue(name='extrusionColor',value=(0.8,0.6,0.0)),
        fieldValue(name='extrusionTransparency',value=0.8),
        fieldValue(name='traceEnabled',value=False)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MobiusExtrusion.py")
