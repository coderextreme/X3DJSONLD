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
    meta(content='ExtrusionPentagon.x3d',name='title'),
    meta(content='Simple regular pentagon extruded vertically, shown side-by-side with an ExtrusionCrossSection visualization.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='U.S. Naval Postgraduate School (NPS)',name='organization'),
    meta(content='3 September 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Extrusion pentagon',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionPentagon.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionPentagon.x3d'),
    NavigationInfo(DEF='ExamineMode'),
    NavigationInfo(DEF='FlyPanNavigation',type=["FLY","ANY"]),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Extrusion Pentagon',orientation=(-1,0,0,0.2),position=(0,3.17,12.85)),
    Viewpoint(description='Oblique view from above',orientation=(-1,0.015,-0.006,0.78),position=(0.25,8.98,8.99)),
    Viewpoint(description='Overhead view',orientation=(1,0,0,-1.57),position=(0,13.15,0)),
    Background(groundColor=[(0.9,0.9,0.9)],skyColor=[(0.9,0.9,0.9)]),
    Transform(translation=(-4,0,0),
      children=[
      Shape(
        #  be sure to order cross-section points so that normal is upward 
        geometry=Extrusion(crossSection=[(-3.5,-1),(-2.1,2.9),(2.2,2.9),(3.6,-1),(0,-3.5),(-3.5,-1)],scale=[(1,1),(1,1),(0.2,0.2)],spine=[(0,0,0),(0,1,0),(0,1.6,0)],
          #  spine is open, crossSection is closed 
          ),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.6,0.5))))]),
    #  Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField="children") rather than an Extrusion node (with containerField="geometry"). 
    #  ExtrusionCrossSection is a Prototype, which are explained in Chapter 14. 
    #  TODO update original version of ExtrusionCrossSectionPrototype.js at X3D Examples Archive Basic course 
    ExternProtoDeclare(appinfo='Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point',name='ExtrusionCrossSection',url=["ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"],
      #  run-time eventIn Extrusion-modification interfaces for VRML 97 compatibility 
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
    Transform(translation=(4,0,0),
      children=[
      ProtoInstance(DEF='PentagonExtrusion',name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='PentagonExtrusion'),
        fieldValue(name='crossSection',value=[(-3.5,-1),(-2.1,2.9),(2.2,2.9),(3.6,-1),(0,-3.5),(-3.5,-1)]),
        fieldValue(name='spine',value=[(0,0,0),(0,1,0),(0,1.6,0)]),
        fieldValue(name='scale',value=[(1,1),(1,1),(0.2,0.2)]),
        fieldValue(name='ccw',value=True),
        fieldValue(name='spineColor',value=(0.7,0.7,0)),
        fieldValue(name='crossSectionColor',value=(0.6,0.6,0.2)),
        fieldValue(name='extrusionColor',value=(0.3,0.6,0.6)),
        fieldValue(name='extrusionTransparency',value=0.6),
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

print ("python x3d.py load successful for ExtrusionPentagon.py")
