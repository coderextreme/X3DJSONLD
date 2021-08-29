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
    meta(content='ExtrusionCrossSectionITSSPrototype.x3d',name='title'),
    meta(content='Don Brutzman and Sungmin Kwon',name='creator'),
    meta(content='23 October 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Shape prototype for Enclosing IndexedTriangleStripSet that also draws spine line plus oriented, scaled cross sections at each spine point.',name='description'),
    meta(content='Utilize ExtrusionCrossSectionITSS ProtoInstance as if it is a Shape node (with containerField="children") rather than an Extrusion node (with containerField="geometry") under a Shape.',name='hint'),
    meta(content='VRML 97 Specification, 6.18 Extrusion',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='VRML 97 Specification, Figure 6.6',name='Image'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/Images/Extrusion.gif',name='Image'),
    meta(content='http://realism.com/x3d/examples/Extrusion/_frame.html',name='reference'),
    meta(content='http://www.cs.brown.edu/~gss/vrml/drawpoly.html',name='reference'),
    meta(content='ExtrusionXj3dGoldberg1999.java',name='reference'),
    meta(content='http://web3d.metrolink.com/cgi-bin/cvsweb.cgi/x3d/src/com/sun/j3d/loaders/vrml97/impl/Attic/Extrusion.java',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionCrossSectionITSSPrototype.x3d'),
    ProtoDeclare(appinfo='Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point',documentation='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionPrototype.x3d',name='ExtrusionCrossSectionITSS',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Extrusion name',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='crossSection',type='MFVec2f',value=[(1,1),(1,-1),(-1,-1),(-1,1),(1,1)]),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='spine',type='MFVec3f',value=[(0,0,0),(0,1,0)]),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='scale',type='MFVec2f',value=[(1,1)]),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='orientation',type='MFRotation',value=[(0,0,1,0)]),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='beginCap',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='endCap',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='convex',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='creaseAngle',type='SFFloat',value=0),
        field(accessType='initializeOnly',appinfo='Extrusion field',name='solid',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='emissiveColor of spine',name='spineColor',type='SFColor',value=(0,0.9,0.8)),
        field(accessType='inputOutput',appinfo='diffuseColor of crossSection',name='crossSectionColor',type='SFColor',value=(0.2,0.8,0.3)),
        field(accessType='inputOutput',appinfo='transparency of crossSection',name='crossSectionTransparency',type='SFFloat',value=0.2),
        field(accessType='inputOutput',appinfo='diffuseColor of extrusion hull',name='extrusionColor',type='SFColor',value=(0.3,0.3,0.3)),
        field(accessType='inputOutput',appinfo='transparency of extrusion hull',name='extrusionTransparency',type='SFFloat',value=0.7),
        field(accessType='initializeOnly',appinfo='Image to apply to Extrusion',name='extrusionImageTexture',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='TextureTransform coordinates of image applied to Extrusion',name='extrusionTextureTransform',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='inputOnly',appinfo='Extrusion field',name='set_crossSection',type='MFVec2f'),
        field(accessType='inputOnly',appinfo='Extrusion field',name='set_spine',type='MFVec3f'),
        field(accessType='inputOnly',appinfo='Extrusion field',name='set_scale',type='MFVec2f'),
        field(accessType='inputOnly',appinfo='Extrusion field',name='set_orientation',type='MFRotation'),
        field(accessType='initializeOnly',appinfo='Whether to provide initialization trace statements showing node construction',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(DEF='Spine',
            geometry=IndexedLineSet(DEF='SpineLine',colorPerVertex=False,
              coord=Coordinate(DEF='SpineCoordinates',
                IS=IS(
                  connect=[
                  connect(nodeField='point',protoField='spine'),
                  connect(nodeField='point',protoField='set_spine')]))),
            appearance=Appearance(
              material=Material(DEF='SpineMaterial',
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='spineColor')])))),
          Shape(DEF='InternalCrossSections',
            geometry=IndexedTriangleFanSet(DEF='CrossSectionFaces',ccw=True,colorPerVertex=True,normalPerVertex=True,solid=False,
              coord=Coordinate(DEF='CrossSectionFacesCoordinates')),
            appearance=Appearance(
              material=Material(DEF='CrossSectionMaterial',
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='crossSectionColor'),
                  connect(nodeField='transparency',protoField='crossSectionTransparency')])))),
          Shape(DEF='ExternalExtrusion2',
            appearance=Appearance(DEF='ExtrusionAppearance2',
              IS=IS(
                connect=[
                connect(nodeField='texture',protoField='extrusionImageTexture'),
                connect(nodeField='textureTransform',protoField='extrusionTextureTransform')]),
              material=Material(DEF='ExtrusionMaterial2',
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='extrusionColor'),
                  connect(nodeField='transparency',protoField='extrusionTransparency')]))),
            geometry=IndexedTriangleStripSet(DEF='EnclosingExtrusion2',ccw=True,colorPerVertex=True,index=[0,1,2],normalPerVertex=True,solid=True,
              coord=Coordinate(DEF='ExtrusionCoordinates2')))]
          #  <Shape DEF='ExternalExtrusion'> <Extrusion DEF='EnclosingExtrusion' convex='false' solid='false'> <IS> <connect nodeField='crossSection' protoField='crossSection'/> <connect nodeField='spine' protoField='spine'/> <connect nodeField='scale' protoField='scale'/> <connect nodeField='orientation' protoField='orientation'/> <connect nodeField='set_crossSection' protoField='set_crossSection'/> <connect nodeField='set_spine' protoField='set_spine'/> <connect nodeField='set_scale' protoField='set_scale'/> <connect nodeField='set_orientation' protoField='set_orientation'/> <connect nodeField='beginCap' protoField='beginCap'/> <connect nodeField='endCap' protoField='endCap'/> <connect nodeField='ccw' protoField='ccw'/> <connect nodeField='convex' protoField='convex'/> <connect nodeField='creaseAngle' protoField='creaseAngle'/> <connect nodeField='solid' protoField='solid'/> </IS> </Extrusion> <Appearance DEF='ExtrusionAppearance'> <IS> <connect nodeField='texture' protoField='extrusionImageTexture'/> <connect nodeField='textureTransform' protoField='extrusionTextureTransform'/> </IS> <Material DEF='ExtrusionMaterial'> <IS> <connect nodeField='diffuseColor' protoField='extrusionColor'/> <connect nodeField='transparency' protoField='extrusionTransparency'/> </IS> </Material> </Appearance> </Shape> 
          ),
        #  TODO hardwired local Script path to workaround BS Contact bug 
        Script(DEF='CrossSectionScript',url=["ExtrusionCrossSectionITSSPrototype.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ExtrusionCrossSectionITSSPrototype.js"],
          field=[
          field(accessType='initializeOnly',name='name',type='SFString'),
          field(accessType='initializeOnly',name='crossSection',type='MFVec2f'),
          field(accessType='initializeOnly',name='spine',type='MFVec3f'),
          field(accessType='initializeOnly',name='scale',type='MFVec2f'),
          field(accessType='initializeOnly',name='orientation',type='MFRotation'),
          field(accessType='inputOutput',name='spineColor',type='SFColor'),
          field(accessType='inputOutput',name='crossSectionColor',type='SFColor'),
          field(accessType='inputOutput',name='crossSectionTransparency',type='SFFloat'),
          field(accessType='inputOutput',name='extrusionColor',type='SFColor'),
          field(accessType='inputOutput',name='extrusionTransparency',type='SFFloat'),
          field(accessType='inputOnly',name='set_crossSection',type='MFVec2f'),
          field(accessType='inputOnly',name='set_spine',type='MFVec3f'),
          field(accessType='inputOnly',name='set_scale',type='MFVec2f'),
          field(accessType='inputOnly',name='set_orientation',type='MFRotation'),
          field(accessType='outputOnly',name='spineIndex',type='MFInt32'),
          field(accessType='outputOnly',name='facesIndex',type='MFInt32'),
          field(accessType='outputOnly',name='facePoints',type='MFVec3f'),
          field(accessType='outputOnly',name='triStripIndex',type='MFInt32'),
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
          #  local variables 
          field(accessType='initializeOnly',name='computedFacesIndex',type='MFInt32'),
          field(accessType='initializeOnly',name='computedFacePoints',type='MFVec3f'),
          field(accessType='initializeOnly',name='computedTriStripIndex',type='MFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='name',protoField='name'),
            connect(nodeField='crossSection',protoField='crossSection'),
            connect(nodeField='spine',protoField='spine'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='spineColor',protoField='spineColor'),
            connect(nodeField='crossSectionColor',protoField='crossSectionColor'),
            connect(nodeField='crossSectionTransparency',protoField='crossSectionTransparency'),
            connect(nodeField='extrusionColor',protoField='extrusionColor'),
            connect(nodeField='extrusionTransparency',protoField='extrusionTransparency'),
            connect(nodeField='orientation',protoField='orientation'),
            connect(nodeField='set_crossSection',protoField='set_crossSection'),
            connect(nodeField='set_spine',protoField='set_spine'),
            connect(nodeField='set_scale',protoField='set_scale'),
            connect(nodeField='set_orientation',protoField='set_orientation'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')])),
        ROUTE(fromField='spineIndex',fromNode='CrossSectionScript',toField='set_coordIndex',toNode='SpineLine'),
        ROUTE(fromField='facesIndex',fromNode='CrossSectionScript',toField='set_index',toNode='CrossSectionFaces'),
        ROUTE(fromField='facePoints',fromNode='CrossSectionScript',toField='point',toNode='CrossSectionFacesCoordinates'),
        ROUTE(fromField='triStripIndex',fromNode='CrossSectionScript',toField='set_index',toNode='EnclosingExtrusion2'),
        Group(
          #  ======= ROUTE Trace ============================================== 
          children=[
          Script(DEF='Trace_ROUTE_CrossSectionScript.triStripIndex_TO_EnclosingExtrusion2.set_index',mustEvaluate=True,
            #  Trace ROUTEd event values on X3D browser console 
            field=[
            field(accessType='initializeOnly',appinfo='Sampling frequency in seconds (0 means all values)',name='reportInterval',type='SFTime',value=1.0),
            field(accessType='inputOnly',name='traceValue',type='MFInt32'),
            field(accessType='initializeOnly',name='timeStampPreviousReport',type='SFTime',value=-1)]),
          ROUTE(fromField='triStripIndex',fromNode='CrossSectionScript',toField='traceValue',toNode='Trace_ROUTE_CrossSectionScript.triStripIndex_TO_EnclosingExtrusion2.set_index')]
          #  ======= ROUTE Trace block complete ===================================================== 
          ),
        ROUTE(fromField='facePoints',fromNode='CrossSectionScript',toField='point',toNode='ExtrusionCoordinates2')]
        #  
        )),
    #  ==================== 
    #  Example instance adapted from Figure15.12Torus.x3d 
    #  https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter15-Extrusion/Figure15.12Torus.x3d 
    #  Redirection text in case a user examines this PROTO file via a 3D browser: 
    Group(
      children=[
      Transform(translation=(0,0.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
          geometry=Text(string=["ExtrusionCrossSectionITSS","is a Prototype definition scene"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionCrossSectionITSSPrototype.py")
