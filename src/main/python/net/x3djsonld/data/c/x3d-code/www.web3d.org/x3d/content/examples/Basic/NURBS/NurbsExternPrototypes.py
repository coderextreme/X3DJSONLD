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
    meta(content='NurbsExternPrototypes.x3d',name='title'),
    meta(content='Non-Uniform Rational B-Spline (NURBS) external prototype definitions, used for building VRML 97 signatures for inclusion in X3dToVrml97 conversion stylesheet.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Alan Shaffer',name='revisor'),
    meta(content='28 February 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development, needs to be upgraded to final version of X3D NURBS nodes',name='warning'),
    meta(content='.wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any DIS nodes.',name='info'),
    meta(content='NurbsPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/nurbs.html',name='reference'),
    meta(content='NURBS Prototypes',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsExternPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsExternPrototypes.x3d'),
    ExternProtoDeclare(appinfo='Contour2D node groups a set of curve segments (either NurbsCurve2D or ContourPolyline2D nodes) to a composite contour in consecutive order according to the topology of the contour. The children shall form a closed loop with the first point of the first child repeated as the last point of the last child and the last point of a segment repeated as the first point of the consecutive one.',documentation='https://www.web3d.org/technicalinfo/specifications/ISO_IEC_19775/Part01/components/nurbs.html#Contour2D',name='Contour2D',url=["NurbsPrototypes.x3d#Contour2D","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#Contour2D","NurbsPrototypes.wrl#Contour2D","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#Contour2D"],
      field=[
      field(accessType='inputOnly',appinfo='[NurbsCurve|ContourPolyline2D]',name='addChildren',type='MFNode'),
      field(accessType='inputOnly',appinfo='[NurbsCurve|ContourPolyline2D]',name='removeChildren',type='MFNode'),
      field(accessType='initializeOnly',appinfo='[NurbsCurve|ContourPolyline2D] default []',name='children',type='MFNode'),
      field(accessType='inputOnly',name='set_children',type='MFNode'),
      field(accessType='outputOnly',name='children_changed',type='MFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='ContourPolyline2D',url=["NurbsPrototypes.x3d#ContourPolyline2D","../NURBS/NurbsPrototypes.x3d#ContourPolyline2D","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#ContourPolyline2D","NurbsPrototypes.wrl#ContourPolyline2D","../NURBS/NurbsPrototypes.wrl#ContourPolyline2D","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#ContourPolyline2D"],
      field=[
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='point',type='MFVec2f'),
      field(accessType='inputOnly',name='set_point',type='MFVec2f'),
      field(accessType='outputOnly',name='point_changed',type='MFVec2f'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='CoordinateDouble',url=["NurbsPrototypes.x3d#CoordinateDouble","../NURBS/NurbsPrototypes.x3d#CoordinateDouble","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#CoordinateDouble","NurbsPrototypes.wrl#CoordinateDouble","../NURBS/NurbsPrototypes.wrl#CoordinateDouble","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#CoordinateDouble"],
      field=[
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='point',type='MFVec3f'),
      field(accessType='inputOnly',name='set_point',type='MFVec3f'),
      field(accessType='outputOnly',name='point_changed',type='MFVec3f'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsCurve',url=["NurbsPrototypes.x3d#NurbsCurve","../NURBS/NurbsPrototypes.x3d#NurbsCurve","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsCurve","NurbsPrototypes.wrl#NurbsCurve","../NURBS/NurbsPrototypes.wrl#NurbsCurve","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsCurve"],
      field=[
      field(accessType='initializeOnly',appinfo='[X3DCoordinateNode] default []',name='controlPoint',type='SFNode'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default 0',name='tessellation',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (0,∞) default []',name='weight',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='default false',name='closed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='knot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='order',type='SFInt32'),
      field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
      field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
      field(accessType='inputOnly',name='set_tessellation',type='SFInt32'),
      field(accessType='outputOnly',name='tessellation_changed',type='SFInt32'),
      field(accessType='inputOnly',name='set_weight',type='MFDouble'),
      field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsCurve2D',url=["NurbsPrototypes.x3d#NurbsCurve2D","../NURBS/NurbsPrototypes.x3d#NurbsCurve2D","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsCurve2D","NurbsPrototypes.wrl#NurbsCurve2D","../NURBS/NurbsPrototypes.wrl#NurbsCurve2D","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsCurve2D"],
      field=[
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='controlPoint',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default 0',name='tessellation',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (0,∞) default []',name='weight',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='knot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='order',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='default false',name='closed',type='SFBool'),
      field(accessType='inputOnly',name='set_controlPoint',type='MFVec2f'),
      field(accessType='outputOnly',name='controlPoint_changed',type='MFVec2f'),
      field(accessType='inputOnly',name='set_tessellation',type='SFInt32'),
      field(accessType='outputOnly',name='tessellation_changed',type='SFInt32'),
      field(accessType='inputOnly',name='set_weight',type='MFDouble'),
      field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsOrientationInterpolator',url=["NurbsPrototypes.x3d#NurbsOrientationInterpolator","../NURBS/NurbsPrototypes.x3d#NurbsOrientationInterpolator","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsOrientationInterpolator","NurbsPrototypes.wrl#NurbsOrientationInterpolator","../NURBS/NurbsPrototypes.wrl#NurbsOrientationInterpolator","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsOrientationInterpolator"],
      field=[
      field(accessType='inputOnly',appinfo='range (-∞,∞)',name='set_fraction',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='[X3DCoordinateNode] default []',name='controlPoint',type='SFNode'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='knot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range (2,∞) default 3',name='order',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='weight',type='MFDouble'),
      field(accessType='outputOnly',name='value_changed',type='SFRotation'),
      field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
      field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
      field(accessType='inputOnly',name='set_knot',type='MFDouble'),
      field(accessType='outputOnly',name='knot_changed',type='MFDouble'),
      field(accessType='inputOnly',name='set_order',type='SFInt32'),
      field(accessType='outputOnly',name='order_changed',type='SFInt32'),
      field(accessType='inputOnly',name='set_weight',type='MFDouble'),
      field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsPatchSurface',url=["NurbsPrototypes.x3d#NurbsPatchSurface","../NURBS/NurbsPrototypes.x3d#NurbsPatchSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsPatchSurface","NurbsPrototypes.wrl#NurbsPatchSurface","../NURBS/NurbsPrototypes.wrl#NurbsPatchSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsPatchSurface"],
      field=[
      field(accessType='initializeOnly',appinfo='[X3DCoordinateNode] default []',name='controlPoint',type='SFNode'),
      field(accessType='initializeOnly',appinfo='[X3DTextureCoordinateNode|NurbsTextureCoordinate] default []',name='texCoord',type='SFNode'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default 0',name='uTessellation',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default 0',name='vTessellation',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (0,∞) default []',name='weight',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='default true',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default false',name='uClosed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='uDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='uKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='uOrder',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='default false',name='vClosed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='vDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='vKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='vOrder',type='SFInt32'),
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
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsPositionInterpolator',url=["NurbsPrototypes.x3d#NurbsPositionInterpolator","../NURBS/NurbsPrototypes.x3d#NurbsPositionInterpolator","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsPositionInterpolator","NurbsPrototypes.wrl#NurbsPositionInterpolator","../NURBS/NurbsPrototypes.wrl#NurbsPositionInterpolator","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsPositionInterpolator"],
      field=[
      field(accessType='inputOnly',appinfo='range (-∞,∞)',name='set_fraction',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='[X3DCoordinateNode] default []',name='controlPoint',type='SFNode'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='knot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range (2,∞) default 3',name='order',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='weight',type='MFDouble'),
      field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
      field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
      field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
      field(accessType='inputOnly',name='set_knot',type='MFDouble'),
      field(accessType='outputOnly',name='knot_changed',type='MFDouble'),
      field(accessType='inputOnly',name='set_order',type='SFInt32'),
      field(accessType='outputOnly',name='order_changed',type='SFInt32'),
      field(accessType='inputOnly',name='set_weight',type='MFDouble'),
      field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsSet',url=["NurbsPrototypes.x3d#NurbsSet","../NURBS/NurbsPrototypes.x3d#NurbsSet","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSet","NurbsPrototypes.wrl#NurbsSet","../NURBS/NurbsPrototypes.wrl#NurbsSet","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSet"],
      field=[
      field(accessType='inputOnly',appinfo='[NurbsPatchSurface]',name='addGeometry',type='MFNode'),
      field(accessType='inputOnly',appinfo='[NurbsPatchSurface]',name='removeGeometry',type='MFNode'),
      field(accessType='initializeOnly',appinfo='[NurbsPatchSurface] default []',name='geometry',type='MFNode'),
      field(accessType='initializeOnly',appinfo='range (0,∞) default 1.0',name='tessellationScale',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default [0 0 0]',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='range [0,∞); [-1 -1 -1] default [-1 -1 -1]',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOnly',name='set_geometry',type='MFNode'),
      field(accessType='outputOnly',name='geometry_changed',type='MFNode'),
      field(accessType='inputOnly',name='set_tessellationScale',type='SFFloat'),
      field(accessType='outputOnly',name='tessellationScale_changed',type='SFFloat'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsSurfaceInterpolator',url=["NurbsPrototypes.x3d#NurbsSurfaceInterpolator","../NURBS/NurbsPrototypes.x3d#NurbsSurfaceInterpolator","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSurfaceInterpolator","NurbsPrototypes.wrl#NurbsSurfaceInterpolator","../NURBS/NurbsPrototypes.wrl#NurbsSurfaceInterpolator","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSurfaceInterpolator"],
      field=[
      field(accessType='inputOnly',appinfo='range (-∞,∞)',name='set_fraction',type='SFVec2f'),
      field(accessType='initializeOnly',appinfo='[X3DCoordinateNode] default []',name='controlPoint',type='SFNode'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='weight',type='MFDouble'),
      field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',name='normal_changed',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='uDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='uKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='uOrder',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='vDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='vKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2∞) default 3',name='vOrder',type='SFInt32'),
      field(accessType='inputOnly',name='set_controlPoint',type='SFNode'),
      field(accessType='outputOnly',name='controlPoint_changed',type='SFNode'),
      field(accessType='inputOnly',name='set_weight',type='MFDouble'),
      field(accessType='outputOnly',name='weight_changed',type='MFDouble'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsSweptSurface',url=["NurbsPrototypes.x3d#NurbsSweptSurface","../NURBS/NurbsPrototypes.x3d#NurbsSweptSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSweptSurface","NurbsPrototypes.wrl#NurbsSweptSurface","../NURBS/NurbsPrototypes.wrl#NurbsSweptSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSweptSurface"],
      field=[
      field(accessType='initializeOnly',appinfo='[X3DNurbsControlCurveNode] default []',name='crossSectionCurve',type='SFNode'),
      field(accessType='initializeOnly',appinfo='[NurbsCurve] default []',name='trajectoryCurve',type='SFNode'),
      field(accessType='initializeOnly',appinfo='default true',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default true',name='solid',type='SFBool'),
      field(accessType='inputOnly',name='set_crossSectionCurve',type='SFNode'),
      field(accessType='outputOnly',name='crossSectionCurve_changed',type='SFNode'),
      field(accessType='inputOnly',name='set_trajectoryCurve',type='SFNode'),
      field(accessType='outputOnly',name='trajectoryCurve_changed',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsSwungSurface',url=["NurbsPrototypes.x3d#NurbsSwungSurface","../NURBS/NurbsPrototypes.x3d#NurbsSwungSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsSwungSurface","NurbsPrototypes.wrl#NurbsSwungSurface","../NURBS/NurbsPrototypes.wrl#NurbsSwungSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsSwungSurface"],
      field=[
      field(accessType='initializeOnly',appinfo='[X3DNurbsControlCurveNode] default []',name='profileCurve',type='SFNode'),
      field(accessType='initializeOnly',appinfo='[X3DNurbsControlCurveNode] default []',name='trajectoryCurve',type='SFNode'),
      field(accessType='initializeOnly',appinfo='default true',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default true',name='solid',type='SFBool'),
      field(accessType='inputOnly',name='set_profileCurve',type='SFNode'),
      field(accessType='outputOnly',name='profileCurve_changed',type='SFNode'),
      field(accessType='inputOnly',name='set_trajectoryCurve',type='SFNode'),
      field(accessType='outputOnly',name='trajectoryCurve_changed',type='SFNode'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsTextureCoordinate',url=["NurbsPrototypes.x3d#NurbsTextureCoordinate","../NURBS/NurbsPrototypes.x3d#NurbsTextureSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsTextureCoordinate","NurbsPrototypes.wrl#NurbsTextureCoordinate","../NURBS/NurbsPrototypes.wrl#NurbsTextureCoordinate","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsTextureCoordinate"],
      field=[
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='controlPoint',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='range (0,∞) default []',name='weight',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='uDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='uKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2∞) default 3',name='uOrder',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='vDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='vKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='vOrder',type='SFInt32'),
      field(accessType='inputOnly',name='set_controlPoint',type='MFVec2f'),
      field(accessType='outputOnly',name='controlPoint_changed',type='MFVec2f'),
      field(accessType='inputOnly',name='set_weight',type='MFFloat'),
      field(accessType='outputOnly',name='weight_changed',type='MFFloat'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(name='NurbsTrimmedSurface',url=["NurbsPrototypes.x3d#NurbsTrimmedSurface","../NURBS/NurbsPrototypes.x3d#NurbsTrimmedSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.x3d#NurbsTrimmedSurface","NurbsPrototypes.wrl#NurbsTrimmedSurface","../NURBS/NurbsPrototypes.wrl#NurbsTrimmedSurface","https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPrototypes.wrl#NurbsTrimmedSurface"],
      #  No attributes, node-type children and events only. 
      field=[
      field(accessType='inputOnly',appinfo='[Contour2D]',name='addTrimmingContour',type='MFNode'),
      field(accessType='inputOnly',appinfo='[Contour2D]',name='removeTrimmingContour',type='MFNode'),
      field(accessType='initializeOnly',appinfo='[X3DCoordinateNode] default []',name='controlPoint',type='SFNode'),
      field(accessType='initializeOnly',appinfo='[X3DTextureCoordinateNode|NurbsTextureCoordinate] default []',name='texCoord',type='SFNode'),
      field(accessType='initializeOnly',appinfo='[Contour2D] default []',name='trimmingContour',type='MFNode'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default 0',name='uTessellation',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default 0',name='vTessellation',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (0,∞) default []',name='weight',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='default true',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default false',name='uClosed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='uDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='uKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='uOrder',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='default false',name='vClosed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='range [0,∞) default 0',name='vDimension',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='range (-∞,∞) default []',name='vKnot',type='MFDouble'),
      field(accessType='initializeOnly',appinfo='range [2,∞) default 3',name='vOrder',type='SFInt32'),
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
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.8,0.6,0.2))),
      geometry=Text(string=["NurbsExternPrototypes is a","developmental file for producing","EXTERNPROTO signatures","in VRML 97 syntax."],
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

print ("python x3d.py load successful for NurbsExternPrototypes.py")
