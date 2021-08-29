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
    component(level=4,name='NURBS'),
    meta(content='NurbsPrototypes.x3d',name='title'),
    meta(content='Non-Uniform Rational B-Spline (NURBS) prototype definitions.',name='description'),
    meta(content='Original blaxxun definitions heavily modified, X3D specification revisions by Don Brutzman, Charles Adams, Jeffrey Weekley and Alan Shaffer NPS.',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 January 2000',name='created'),
    meta(content='18 March 2002',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Under development for final version of X3D NURBS nodes',name='warning'),
    meta(content='Not all NURBS nodes are prototyped here, and these implementations are not yet fully demonstrated.',name='warning'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/nurbs.html',name='reference'),
    meta(content='http://www.blaxxun.com/vrml/protos/nurbs.wrl',name='reference'),
    meta(content='NurbsPrototypesOriginal.x3d.txt',name='reference'),
    meta(content='javadoc/index.html',name='reference'),
    meta(content='NURBS Prototypes',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsPrototypes.x3d'),
    ProtoDeclare(appinfo='Contour2D groups a set of curve segments to a composite contour Children segments form a closed loop with first point of first child repeated as last point of last child and last point of segment repeated as first point of consecutive segment Children segments are type NurbsCurve2D or Polyline2D enumerated in consecutive order of contour topology.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#Contour2D',name='Contour2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='[NurbsCurve|ContourPolyline2D]',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',appinfo='[NurbsCurve|ContourPolyline2D]',name='removeChildren',type='MFNode'),
        field(accessType='initializeOnly',appinfo='[NurbsCurve|ContourPolyline2D]',name='children',type='MFNode',
          #  default is empty node array 
          ),
        field(accessType='inputOnly',name='set_children',type='MFNode'),
        field(accessType='outputOnly',name='children_changed',type='MFNode'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='Contour2DGroup',
          IS=IS(
            connect=[
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='set_children',protoField='set_children'),
            connect(nodeField='children_changed',protoField='children_changed')]))]
        #  consider adding a Script here to check that the children nodes are solely of type NurbsCurve2D and/or ContourPolyline2D 
        )),
    ProtoDeclare(appinfo='ContourPolyline2D defines a linear curve segment as part of a trimming contour in u-v domain of a surface.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#ContourPolyline2D',name='ContourPolyline2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='point',type='MFVec2f',
          #  Specification definition: MFVec2f [in,out] point [] (-∞,∞) but we cannot match accessType inputOutput since there is no VRML 97 field that is MFVec2f [in,out]. Hence a known limitation. 
          ),
        field(accessType='inputOnly',name='set_point',type='MFVec2f'),
        field(accessType='outputOnly',name='point_changed',type='MFVec2f'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        #  Typical initial approach: group all body nodes together, since rendering is only affected by first Prototype child. Then, map interface field(s) to dummy-node field(s) so that a Script can USE and then manipulate them. 
        children=[
        Group(DEF='ContourPolyline2DGroup',
          children=[
          Switch(DEF='HideDummy',whichChoice=-1,
            children=[
            Shape(
              geometry=Extrusion(DEF='PointHolder',
                IS=IS(
                  connect=[
                  connect(nodeField='crossSection',protoField='point')])))]),
          Script(DEF='ScriptContourPolyline2D-missingBody',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='PointHolder',type='SFNode',
              children=[
              Extrusion(USE='PointHolder')])])])])),
    ProtoDeclare(appinfo='CoordinateDouble builds geometry using a set of 3D coordinates. CoordinateDouble is used by IndexedFaceSet IndexedLineSet LineSet and PointSet. CoordinateDouble is also used by NurbsPositionInterpolator and NurbsOrientationInterpolator.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#CoordinateDouble',name='CoordinateDouble',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Substitute MFVec3f for MFVec3d to provide VRML 97 support',name='point',type='MFVec3f',
          #  Specification definition: MFVec3d [in,out] point [] (-∞,∞) 
          ),
        field(accessType='inputOnly',name='set_point',type='MFVec3f'),
        field(accessType='outputOnly',name='point_changed',type='MFVec3f'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Coordinate(
          IS=IS(
            connect=[
            connect(nodeField='point',protoField='point'),
            connect(nodeField='set_point',protoField='set_point'),
            connect(nodeField='point_changed',protoField='point_changed')]))]
        #  no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
        )),
    ProtoDeclare(appinfo='NurbsCurve is a 3D curve analogous to NurbsPatchSurface. The container controlPoint field is a Coordinate or CoordinateDouble node.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsCurve',name='NurbsCurve',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='tessellation',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (0,∞)',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',name='closed',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='knot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='order',type='SFInt32',value=3),
        field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
        field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_tessellation',type='SFInt32'),
        field(accessType='outputOnly',name='tessellation_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='NurbsCurveLineSet',
          coord=Coordinate(DEF='NurbsCurveCoord')),
        #  only first child of ProtoBody renders 
        Switch(whichChoice=-1,
          children=[
          Shape(
            geometry=IndexedFaceSet(
              IS=IS(
                connect=[
                connect(nodeField='coord',protoField='controlPoint')])))]),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='NurbsCurveScript',directOutput=True,mustEvaluate=True,url=["NurbsCurve.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsCurve.class"],
          field=[
          field(accessType='initializeOnly',name='controlPoint',type='SFNode'),
          field(accessType='initializeOnly',name='tessellation',type='SFInt32'),
          field(accessType='initializeOnly',name='weight',type='MFDouble'),
          field(accessType='initializeOnly',name='closed',type='SFBool'),
          field(accessType='initializeOnly',name='knot',type='MFDouble'),
          field(accessType='initializeOnly',name='order',type='SFInt32'),
          field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
          field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_tessellation',type='SFInt32'),
          field(accessType='outputOnly',name='tessellation_changed',type='SFInt32'),
          field(accessType='inputOnly',name='set_weight',type='MFDouble'),
          field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
          field(accessType='outputOnly',name='point',type='MFVec3f'),
          field(accessType='outputOnly',name='pointIndex',type='MFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='controlPoint',protoField='controlPoint'),
            connect(nodeField='tessellation',protoField='tessellation'),
            connect(nodeField='weight',protoField='weight'),
            connect(nodeField='closed',protoField='closed'),
            connect(nodeField='knot',protoField='knot'),
            connect(nodeField='order',protoField='order'),
            connect(nodeField='set_controlPoint',protoField='set_controlPoint'),
            connect(nodeField='controlPoint_changed',protoField='controlPoint_changed'),
            connect(nodeField='set_tessellation',protoField='set_tessellation'),
            connect(nodeField='tessellation_changed',protoField='tessellation_changed'),
            connect(nodeField='set_weight',protoField='set_weight'),
            connect(nodeField='weight_changed',protoField='weight_changed')])),
        ROUTE(fromField='point',fromNode='NurbsCurveScript',toField='set_point',toNode='NurbsCurveCoord'),
        ROUTE(fromField='pointIndex',fromNode='NurbsCurveScript',toField='set_coordIndex',toNode='NurbsCurveLineSet')])),
    ProtoDeclare(appinfo='NurbsCurve2D defines a trimming segment that is part of trimming contour in u-v domain of surface NurbsCurve2D forming a closed contour may be used as Contour2D node.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsCurve2D',name='NurbsCurve2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='controlPoint',type='MFVec2f',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='tessellation',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (0,∞)',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='knot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='order',type='SFInt32',value=3),
        field(accessType='initializeOnly',name='closed',type='SFBool',value=False),
        field(accessType='inputOnly',name='set_controlPoint',type='MFVec2f'),
        field(accessType='outputOnly',name='controlPoint_changed',type='MFVec2f'),
        field(accessType='inputOnly',name='set_tessellation',type='SFInt32'),
        field(accessType='outputOnly',name='tessellation_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='NurbsCurve2DGroup')])),
    ProtoDeclare(appinfo='NurbsOrientationInterpolator describes a 3D NURBS Curve and outputs interpolated orientation values. The SFNode controlPoint field can contain a single Coordinate or CoordinateDouble node.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsOrientationInterpolator',name='NurbsOrientationInterpolator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='range (-∞,∞)',name='set_fraction',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='knot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range (2,∞)',name='order',type='SFInt32',value=3),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='outputOnly',name='value_changed',type='SFRotation'),
        field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
        field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_knot',type='MFDouble'),
        field(accessType='outputOnly',name='knot_changed',type='MFDouble'),
        field(accessType='inputOnly',name='set_order',type='SFInt32'),
        field(accessType='outputOnly',name='order_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        children=[
        Script(DEF='NurbsOrientationInterpolatorScript',directOutput=True,mustEvaluate=True,url=["NurbsOrientationInterpolator.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsOrientationInterpolator.class"],
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode'),
          field(accessType='initializeOnly',name='knot',type='MFDouble'),
          field(accessType='initializeOnly',name='order',type='SFInt32'),
          field(accessType='initializeOnly',name='weight',type='MFDouble'),
          field(accessType='outputOnly',name='value_changed',type='SFRotation'),
          field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
          field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_knot',type='MFDouble'),
          field(accessType='outputOnly',name='knot_changed',type='MFDouble'),
          field(accessType='inputOnly',name='set_order',type='SFInt32'),
          field(accessType='outputOnly',name='order_changed',type='SFInt32'),
          field(accessType='inputOnly',name='set_weight',type='MFDouble'),
          field(accessType='outputOnly',name='weight_changed',type='MFDouble')],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='controlPoint',protoField='controlPoint'),
            connect(nodeField='knot',protoField='knot'),
            connect(nodeField='order',protoField='order'),
            connect(nodeField='weight',protoField='weight'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='set_controlPoint',protoField='set_controlPoint'),
            connect(nodeField='controlPoint_changed',protoField='controlPoint_changed'),
            connect(nodeField='set_knot',protoField='set_knot'),
            connect(nodeField='knot_changed',protoField='knot_changed'),
            connect(nodeField='set_order',protoField='set_order'),
            connect(nodeField='order_changed',protoField='order_changed'),
            connect(nodeField='set_weight',protoField='set_weight'),
            connect(nodeField='weight_changed',protoField='weight_changed')])),
        #  Nonrendering holder node for controlPoint Coordinate data 
        Shape(
          geometry=PointSet(
            IS=IS(
              connect=[
              connect(nodeField='coord',protoField='controlPoint')])))])),
    ProtoDeclare(appinfo='NurbsPatchSurface defines a contiguous 3D Non- rational Uniform B-Spline (NURBS) Surface.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsPatchSurface',name='NurbsPatchSurface',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',name='texCoord',type='SFNode',
          children=[
          TextureCoordinate(),]),
        field(accessType='initializeOnly',name='uTessellation',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='vTessellation',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',name='uClosed',type='SFBool',value=False),
        field(accessType='initializeOnly',name='uDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='uKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',name='uOrder',type='SFInt32',value=3),
        field(accessType='initializeOnly',name='vClosed',type='SFBool',value=False),
        field(accessType='initializeOnly',name='vDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='vKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',name='vOrder',type='SFInt32',value=3),
        field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
        field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_texCoord',type='SFNode'),
        field(accessType='outputOnly',name='texCoord_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_uTessellation',type='SFInt32'),
        field(accessType='outputOnly',name='uTessellation_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_vTessellation',type='SFInt32'),
        field(accessType='outputOnly',name='vTessellation_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='NurbsPatchSurfaceFaceSet',creaseAngle=3.14,solid=False,
          IS=IS(
            connect=[
            connect(nodeField='texCoord',protoField='texCoord'),
            connect(nodeField='solid',protoField='solid')]),
          coord=Coordinate(DEF='NurbsPatchSurfaceCoordinate')),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='NurbsPatchSurfaceScript',directOutput=True,mustEvaluate=True,url=["NurbsPatchSurface.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPatchSurface.class"],
          field=[
          field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode'),
          field(accessType='initializeOnly',name='texCoord',type='SFNode'),
          field(accessType='initializeOnly',name='uTessellation',type='SFInt32'),
          field(accessType='initializeOnly',name='vTessellation',type='SFInt32'),
          field(accessType='initializeOnly',name='weight',type='MFDouble'),
          field(accessType='initializeOnly',name='solid',type='SFBool'),
          field(accessType='initializeOnly',name='uClosed',type='SFBool'),
          field(accessType='initializeOnly',name='uDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='uKnot',type='MFDouble'),
          field(accessType='initializeOnly',name='uOrder',type='SFInt32'),
          field(accessType='initializeOnly',name='vClosed',type='SFBool'),
          field(accessType='initializeOnly',name='vDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='vKnot',type='MFDouble'),
          field(accessType='initializeOnly',name='vOrder',type='SFInt32'),
          field(accessType='outputOnly',name='coord',type='MFVec3f'),
          field(accessType='outputOnly',name='coordIndex',type='MFInt32'),
          field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
          field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_texCoord',type='SFNode'),
          field(accessType='outputOnly',name='texCoord_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_weight',type='MFDouble'),
          field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
          field(accessType='inputOnly',name='set_uTessellation',type='SFInt32'),
          field(accessType='outputOnly',name='uTessellation_changed',type='SFInt32'),
          field(accessType='inputOnly',name='set_vTessellation',type='SFInt32'),
          field(accessType='outputOnly',name='vTessellation_changed',type='SFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='controlPoint',protoField='controlPoint'),
            connect(nodeField='texCoord',protoField='texCoord'),
            connect(nodeField='uTessellation',protoField='uTessellation'),
            connect(nodeField='vTessellation',protoField='vTessellation'),
            connect(nodeField='weight',protoField='weight'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='uClosed',protoField='uClosed'),
            connect(nodeField='uDimension',protoField='uDimension'),
            connect(nodeField='uKnot',protoField='uKnot'),
            connect(nodeField='uOrder',protoField='uOrder'),
            connect(nodeField='vClosed',protoField='vClosed'),
            connect(nodeField='vDimension',protoField='vDimension'),
            connect(nodeField='vKnot',protoField='vKnot'),
            connect(nodeField='vOrder',protoField='vOrder'),
            connect(nodeField='set_controlPoint',protoField='set_controlPoint'),
            connect(nodeField='controlPoint_changed',protoField='controlPoint_changed'),
            connect(nodeField='set_texCoord',protoField='set_texCoord'),
            connect(nodeField='texCoord_changed',protoField='texCoord_changed'),
            connect(nodeField='set_uTessellation',protoField='set_uTessellation'),
            connect(nodeField='uTessellation_changed',protoField='uTessellation_changed'),
            connect(nodeField='set_vTessellation',protoField='set_vTessellation'),
            connect(nodeField='vTessellation_changed',protoField='vTessellation_changed'),
            connect(nodeField='set_weight',protoField='set_weight'),
            connect(nodeField='weight_changed',protoField='weight_changed')])),
        ROUTE(fromField='coord',fromNode='NurbsPatchSurfaceScript',toField='set_point',toNode='NurbsPatchSurfaceCoordinate'),
        ROUTE(fromField='coordIndex',fromNode='NurbsPatchSurfaceScript',toField='set_coordIndex',toNode='NurbsPatchSurfaceFaceSet')])),
    ProtoDeclare(appinfo='NurbsPositionInterpolator describes a 3D NURBS Curve and outputs interpolated position values. The SFNode controlPoint field can contain a single Coordinate or CoordinateDouble node.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsPositionInterpolator',name='NurbsPositionInterpolator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='range (-∞,∞)',name='set_fraction',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='knot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range (2,∞)',name='order',type='SFInt32',value=3),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
        field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
        field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_knot',type='MFDouble'),
        field(accessType='outputOnly',name='knot_changed',type='MFDouble'),
        field(accessType='inputOnly',name='set_order',type='SFInt32'),
        field(accessType='outputOnly',name='order_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        children=[
        Script(DEF='NurbsPositionInterpolatorScript',directOutput=True,mustEvaluate=True,url=["NurbsPositionInterpolator.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPositionInterpolator.class"],
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode'),
          field(accessType='initializeOnly',name='knot',type='MFDouble'),
          field(accessType='initializeOnly',name='order',type='SFInt32'),
          field(accessType='initializeOnly',name='weight',type='MFDouble'),
          field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
          field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
          field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_knot',type='MFDouble'),
          field(accessType='outputOnly',name='knot_changed',type='MFDouble'),
          field(accessType='inputOnly',name='set_order',type='SFInt32'),
          field(accessType='outputOnly',name='order_changed',type='SFInt32'),
          field(accessType='inputOnly',name='set_weight',type='MFDouble'),
          field(accessType='outputOnly',name='weight_changed',type='MFDouble')],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='controlPoint',protoField='controlPoint'),
            connect(nodeField='knot',protoField='knot'),
            connect(nodeField='order',protoField='order'),
            connect(nodeField='weight',protoField='weight'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='set_controlPoint',protoField='set_controlPoint'),
            connect(nodeField='controlPoint_changed',protoField='controlPoint_changed'),
            connect(nodeField='set_knot',protoField='set_knot'),
            connect(nodeField='knot_changed',protoField='knot_changed'),
            connect(nodeField='set_order',protoField='set_order'),
            connect(nodeField='order_changed',protoField='order_changed'),
            connect(nodeField='set_weight',protoField='set_weight'),
            connect(nodeField='weight_changed',protoField='weight_changed')])),
        #  Nonrendering holder node for controlPoint Coordinate data 
        Shape(
          geometry=PointSet(
            IS=IS(
              connect=[
              connect(nodeField='coord',protoField='controlPoint')])))])),
    ProtoDeclare(appinfo='NurbsSet collects a set of NurbsPatchSurface nodes into a common group and treats NurbsPatchSurface set as a unit during tessellation thereby enforcing tessellation continuity along borders.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsSet',name='NurbsSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='[NurbsPatchSurface]',name='addGeometry',type='MFNode'),
        field(accessType='inputOnly',appinfo='[NurbsPatchSurface]',name='removeGeometry',type='MFNode'),
        field(accessType='initializeOnly',appinfo='[NurbsPatchSurface]',name='geometry',type='MFNode',
          #  default is empty node array 
          ),
        field(accessType='initializeOnly',appinfo='range (0,∞)',name='tessellationScale',type='SFFloat',value=1.0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='range [0,∞); [-1 -1 -1]',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOnly',name='set_geometry',type='MFNode'),
        field(accessType='outputOnly',name='geometry_changed',type='MFNode'),
        field(accessType='inputOnly',name='set_tessellationScale',type='SFFloat'),
        field(accessType='outputOnly',name='tessellationScale_changed',type='SFFloat'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='NurbsSet',
          IS=IS(
            connect=[
            connect(nodeField='addGeometry',protoField='addGeometry'),
            connect(nodeField='removeGeometry',protoField='removeGeometry'),
            connect(nodeField='geometry',protoField='geometry'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='set_geometry',protoField='set_geometry'),
            connect(nodeField='geometry_changed',protoField='geometry_changed'),
            connect(nodeField='set_tessellationScale',protoField='set_tessellationScale'),
            connect(nodeField='tessellationScale_changed',protoField='tessellationScale_changed')]))])),
    ProtoDeclare(appinfo='NurbsSurfaceInterpolator describes a 3D NURBS Curve and outputs interpolated position and normal values. The SFNode controlPoint field can contain a single Coordinate or CoordinateDouble node.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsSurfaceInterpolator',name='NurbsSurfaceInterpolator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='range (-∞,∞)',name='set_fraction',type='SFVec2f'),
        field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
        field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',name='normal_changed',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='range [0,∞)',name='uDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='uKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='uOrder',type='SFInt32',value=3),
        field(accessType='initializeOnly',appinfo='range [0,∞)',name='vDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='vKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='vOrder',type='SFInt32',value=3),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='NurbsSurfaceInterpolatorFaceSet',creaseAngle=3.14,solid=False,
          coord=Coordinate(DEF='NurbsSurfaceInterpolatorCoordinate')),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='NurbsSurfaceInterpolatorScript',directOutput=True,mustEvaluate=True,url=["NurbsSurfaceInterpolator.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsSurfaceInterpolator.class"],
          field=[
          field(accessType='initializeOnly',name='controlPoint',type='SFNode'),
          field(accessType='initializeOnly',name='weight',type='MFDouble'),
          field(accessType='initializeOnly',name='uDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='uKnot',type='MFDouble'),
          field(accessType='initializeOnly',name='uOrder',type='SFInt32'),
          field(accessType='initializeOnly',name='vDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='vKnot',type='MFDouble'),
          field(accessType='initializeOnly',name='vOrder',type='SFInt32'),
          field(accessType='outputOnly',name='coord',type='MFVec3f'),
          field(accessType='outputOnly',name='coordIndex',type='MFInt32'),
          field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
          field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_weight',type='MFDouble'),
          field(accessType='outputOnly',name='weight_changed',type='MFDouble')],
          IS=IS(
            connect=[
            connect(nodeField='controlPoint',protoField='controlPoint'),
            connect(nodeField='weight',protoField='weight'),
            connect(nodeField='uDimension',protoField='uDimension'),
            connect(nodeField='uKnot',protoField='uKnot'),
            connect(nodeField='uOrder',protoField='uOrder'),
            connect(nodeField='vDimension',protoField='vDimension'),
            connect(nodeField='vKnot',protoField='vKnot'),
            connect(nodeField='vOrder',protoField='vOrder'),
            connect(nodeField='set_controlPoint',protoField='set_controlPoint'),
            connect(nodeField='controlPoint_changed',protoField='controlPoint_changed'),
            connect(nodeField='set_weight',protoField='set_weight'),
            connect(nodeField='weight_changed',protoField='weight_changed')])),
        ROUTE(fromField='coord',fromNode='NurbsSurfaceInterpolatorScript',toField='set_point',toNode='NurbsSurfaceInterpolatorCoordinate'),
        ROUTE(fromField='coordIndex',fromNode='NurbsSurfaceInterpolatorScript',toField='set_coordIndex',toNode='NurbsSurfaceInterpolatorFaceSet')])),
    ProtoDeclare(appinfo='NurbsSweptSurface contains a crossSectionCurve [X3DNurbsControlCurveNode] and a trajectoryCurve [NurbsCurve]',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsSweptSurface',name='NurbsSweptSurface',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='[X3DNurbsControlCurveNode]',name='crossSectionCurve',type='SFNode',
          #  put default node here... 
          ),
        field(accessType='initializeOnly',appinfo='[NurbsCurve]',name='trajectoryCurve',type='SFNode',
          #  put default node here... 
          ),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOnly',appinfo='[X3DNurbsControlCurveNode]',name='set_crossSectionCurve',type='SFNode'),
        field(accessType='outputOnly',appinfo='[X3DNurbsControlCurveNode]',name='crossSectionCurve_changed',type='SFNode'),
        field(accessType='inputOnly',appinfo='[NurbsCurve]',name='set_trajectoryCurve',type='SFNode'),
        field(accessType='outputOnly',appinfo='[NurbsCurve]',name='trajectoryCurve_changed',type='SFNode'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='NurbsSweptSurfaceFaceSet',creaseAngle=3.14,solid=False,
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='solid',protoField='solid')]),
          coord=Coordinate(DEF='NurbsSweptSurfaceCoordinate')),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='NurbsSweptSurfaceScript',directOutput=True,mustEvaluate=True,url=["NurbsSweptSurface.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsSweptSurface.class"],
          field=[
          field(accessType='initializeOnly',appinfo='[X3DNurbsControlCurveNode]',name='crossSectionCurve',type='SFNode'),
          field(accessType='initializeOnly',appinfo='[NurbsCurve]',name='trajectoryCurve',type='SFNode'),
          field(accessType='initializeOnly',name='ccw',type='SFBool'),
          field(accessType='initializeOnly',name='solid',type='SFBool'),
          field(accessType='inputOnly',appinfo='[X3DNurbsControlCurveNode]',name='set_crossSectionCurve',type='SFNode'),
          field(accessType='outputOnly',appinfo='[X3DNurbsControlCurveNode]',name='crossSectionCurve_changed',type='SFNode'),
          field(accessType='inputOnly',appinfo='[NurbsCurve]',name='set_trajectoryCurve',type='SFNode'),
          field(accessType='outputOnly',appinfo='[NurbsCurve]',name='trajectoryCurve_changed',type='SFNode')],
          IS=IS(
            connect=[
            connect(nodeField='crossSectionCurve',protoField='crossSectionCurve'),
            connect(nodeField='trajectoryCurve',protoField='trajectoryCurve'),
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='set_crossSectionCurve',protoField='set_crossSectionCurve'),
            connect(nodeField='crossSectionCurve_changed',protoField='crossSectionCurve_changed'),
            connect(nodeField='set_trajectoryCurve',protoField='set_trajectoryCurve'),
            connect(nodeField='trajectoryCurve_changed',protoField='trajectoryCurve_changed')])),
        ROUTE(fromField='crossSectionCurve_changed',fromNode='NurbsSweptSurfaceScript',toField='coord',toNode='NurbsSweptSurfaceFaceSet'),
        ROUTE(fromField='coordIndex',fromNode='NurbsSweptSurfaceScript',toField='set_coordIndex',toNode='NurbsSweptSurfaceFaceSet')])),
    ProtoDeclare(appinfo='NurbsSwungSurface contains a profileCurve [X3DNurbsControlCurveNode] and a trajectoryCurve [X3DNurbsControlCurveNode]',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsSwungSurface',name='NurbsSwungSurface',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='[X3DNurbsControlCurveNode]',name='profileCurve',type='SFNode'),
        field(accessType='inputOnly',appinfo='[X3DNurbsControlCurveNode]',name='trajectoryCurve',type='SFNode'),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_profileCurve',type='SFNode'),
        field(accessType='outputOnly',name='profileCurve_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_trajectoryCurve',type='SFNode'),
        field(accessType='outputOnly',name='trajectoryCurve_changed',type='SFNode'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='NurbsSwungSurfaceFaceSet',creaseAngle=3.14,solid=False,
          IS=IS(
            connect=[
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='solid',protoField='solid')]),
          coord=Coordinate(DEF='NurbsSwungSurfaceCoordinate')),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='NurbsSwungSurfaceScript',directOutput=True,mustEvaluate=True,url=["NurbSwungSurface.class","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbSwungSurface.class"],
          field=[
          field(accessType='inputOnly',appinfo='[X3DNurbsControlCurveNode]',name='profileCurve',type='SFNode'),
          field(accessType='inputOnly',appinfo='[X3DNurbsControlCurveNode]',name='trajectoryCurve',type='SFNode'),
          field(accessType='initializeOnly',name='ccw',type='SFBool'),
          field(accessType='initializeOnly',name='solid',type='SFBool'),
          field(accessType='inputOnly',name='set_profileCurve',type='SFNode'),
          field(accessType='outputOnly',name='profileCurve_changed',type='SFNode'),
          field(accessType='inputOnly',name='set_trajectoryCurve',type='SFNode'),
          field(accessType='outputOnly',name='trajectoryCurve_changed',type='SFNode')],
          IS=IS(
            connect=[
            connect(nodeField='profileCurve',protoField='profileCurve'),
            connect(nodeField='trajectoryCurve',protoField='trajectoryCurve'),
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='set_profileCurve',protoField='set_profileCurve'),
            connect(nodeField='profileCurve_changed',protoField='profileCurve_changed'),
            connect(nodeField='set_trajectoryCurve',protoField='set_trajectoryCurve'),
            connect(nodeField='trajectoryCurve_changed',protoField='trajectoryCurve_changed')])),
        ROUTE(fromField='coord',fromNode='NurbsSwungSurfaceScript',toField='set_point',toNode='NurbsSwungSurfaceCoordinate'),
        ROUTE(fromField='coordIndex',fromNode='NurbsSwungSurfaceScript',toField='set_coordIndex',toNode='NurbsSwungSurfaceFaceSet')])),
    ProtoDeclare(appinfo='NurbsTextureCoordinate describes a 3D NURBS surface in the parametric domain of its surface host specifying mapping of texture onto the surface. The SFNode controlPoint field can contain a single Coordinate or CoordinateDouble node.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsTextureCoordinate',name='NurbsTextureCoordinate',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='controlPoint',type='MFVec2f',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range (0,∞)',name='weight',type='MFFloat',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [0,∞)',name='uDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='uKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='uOrder',type='SFInt32',value=3),
        field(accessType='initializeOnly',appinfo='range [0,∞)',name='vDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='vKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='vOrder',type='SFInt32',value=3),
        field(accessType='inputOnly',name='set_controlPoint',type='MFVec2f'),
        field(accessType='outputOnly',name='controlPoint_changed',type='MFVec2f'),
        field(accessType='inputOnly',name='set_weight',type='MFFloat'),
        field(accessType='outputOnly',name='weight_changed',type='MFFloat'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='NurbsTextureCoordinateIls',coordIndex=[1,2,3,-1,5,6,7,-1],
          coord=Coordinate(DEF='NurbsTextureCoordinateIlsCoordinate',
            IS=IS(
              connect=[
              connect(nodeField='point',protoField='controlPoint')]))),
        Script(DEF='NurbsTextureCoordinateScript',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='uDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='vDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='ils',type='SFNode',
            children=[
            IndexedLineSet(USE='NurbsTextureCoordinateIls')]),
          field(accessType='initializeOnly',name='localCoordIndex',type='MFInt32',
            #  local computations array prior to sending completed event 
            )],
          IS=IS(
            connect=[
            connect(nodeField='uDimension',protoField='uDimension'),
            connect(nodeField='vDimension',protoField='vDimension')]))])),
    ProtoDeclare(appinfo='NurbsTrimmedSurface generates texture coordinates from a Non-rational Uniform B-Spline (NURBS) surface.',documentation='https://www.web3d.org/x3d/content/X3dTooltips.html#NurbsTrimmedSurface',name='NurbsTrimmedCoordinate',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Contour2D',name='addTrimmingContour',type='MFNode'),
        field(accessType='inputOnly',appinfo='Contour2D',name='removeTrimmingContour',type='MFNode'),
        field(accessType='initializeOnly',appinfo='[X3DCoordinateNode]',name='controlPoint',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='X3DTextureCoordinateNode|NurbsTextureCoordinate',name='texCoord',type='SFNode',
          children=[
          TextureCoordinate(),]),
        field(accessType='initializeOnly',appinfo='Contour2D',name='trimmingContour',type='MFNode',
          children=[
          Contour2D(),]),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='uTessellation',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='vTessellation',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (0,∞)',name='weight',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',name='uClosed',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='range [0,∞)',name='uDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='uKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='uOrder',type='SFInt32',value=3),
        field(accessType='initializeOnly',name='vClosed',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='range [0,∞)',name='vDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='range (-∞,∞)',name='vKnot',type='MFDouble',
          #  default is empty array 
          ),
        field(accessType='initializeOnly',appinfo='range [2,∞)',name='vOrder',type='SFInt32',value=3),
        field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
        field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_texCoord',type='SFNode'),
        field(accessType='outputOnly',name='texCoord_changed',type='SFNode'),
        field(accessType='inputOnly',name='set_trimmingContour',type='MFNode'),
        field(accessType='outputOnly',name='trimmingContour_changed',type='MFNode'),
        field(accessType='inputOnly',name='set_uTessellation',type='SFInt32'),
        field(accessType='outputOnly',name='uTessellation_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_vTessellation',type='SFInt32'),
        field(accessType='outputOnly',name='vTessellation_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_weight',type='MFDouble'),
        field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='initializeOnly',name='localCoordIndex',type='MFInt32',
          #  local computations array prior to sending completed event 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedLineSet(DEF='NurbsTextureSurfaceIls',coordIndex=[1,2,3,-1,5,6,7,-1],
          coord=Coordinate(DEF='NurbsTextureSurfaceIlsCoordinate',
            IS=IS(
              connect=[
              connect(nodeField='point',protoField='controlPoint')]))),
        Script(DEF='NurbsTextureSurfaceScript',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='uDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='vDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='ils',type='SFNode',
            children=[
            IndexedLineSet(USE='NurbsTextureSurfaceIls')])],
          IS=IS(
            connect=[
            connect(nodeField='uDimension',protoField='uDimension'),
            connect(nodeField='vDimension',protoField='vDimension')]))])),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.8,0.6,0.2))),
      geometry=Text(string=["NurbsPrototypes is a","developmental file for","Nurbs implementations."],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NurbsPrototypes.py")
