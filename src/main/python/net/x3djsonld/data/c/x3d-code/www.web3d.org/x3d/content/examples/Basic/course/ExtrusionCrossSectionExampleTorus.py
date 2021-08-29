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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='ExtrusionCrossSectionExampleTorus.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='31 August 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Torus example demonstrating cross-section prototype for Extrusion node that also draws spine line plus oriented, scaled cross sections at each spine point.',name='description'),
    meta(content='Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField="children") rather than an Extrusion node (with containerField="geometry").',name='hint'),
    meta(content='ExtrusionExampleShip.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionExampleShip.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionPrototype.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter30-Scripts/Figure30.5ScriptTorusBuilder.x3d',name='reference'),
    meta(content='VRML 97 Specification, 6.18 Extrusion',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='VRML 97 Specification, Figure 6.6',name='Image'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/Images/Extrusion.gif',name='Image'),
    meta(content='http://realism.com/Web3D/Examples/Extrusion/_frame.html',name='reference'),
    meta(content='http://www.cs.brown.edu/~gss/vrml/drawpoly.html',name='reference'),
    meta(content='ExtrusionXj3dGoldberg1999.java',name='reference'),
    meta(content='http://web3d.metrolink.com/cgi-bin/cvsweb.cgi/x3d/src/com/sun/j3d/loaders/vrml97/impl/Attic/Extrusion.java',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField="children") rather than an Extrusion node (with containerField="geometry"). 
    children=[
    WorldInfo(title='ExtrusionCrossSectionExampleTorus.x3d'),
    ExternProtoDeclare(appinfo='Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point',documentation='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d',name='ExtrusionCrossSection',url=["ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"],
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
    #  ==================== 
    #  Example instance adapted from Figure15.12Torus.x3d 
    #  https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter15-Extrusion/Figure15.12Torus.x3d 
    Viewpoint(description='Torus crossSections, spine and hull',orientation=(-0.351,0.926,0.14,0.81),position=(10,5,10)),
    ProtoInstance(name='ExtrusionCrossSection',
      fieldValue=[
      fieldValue(name='name',value='Torus'),
      fieldValue(name='crossSection',value=[(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1)]),
      fieldValue(name='spine',value=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
      fieldValue(name='beginCap',value=False),
      fieldValue(name='endCap',value=False),
      fieldValue(name='creaseAngle',value=1.57),
      fieldValue(name='spineColor',value=(1,1,1)),
      fieldValue(name='crossSectionColor',value=(0.8,0.8,0)),
      fieldValue(name='crossSectionTransparency',value=0.1),
      fieldValue(name='extrusionColor',value=(1,0,1)),
      fieldValue(name='extrusionTransparency',value=0.8),
      fieldValue(name='traceEnabled',value=False)]),
    Transform(scale=(4,4,4),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionCrossSectionExampleTorus.py")
