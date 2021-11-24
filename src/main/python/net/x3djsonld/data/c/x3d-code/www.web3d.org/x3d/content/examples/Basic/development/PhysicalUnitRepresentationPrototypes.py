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
    meta(content='PhysicalUnitRepresentationPrototypes.x3d',name='title'),
    meta(content='Prototypes to demonstrate functionality for Real-Length Representation nodes.',name='description'),
    meta(content='under development',name='warning'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='22 July 2007',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Myeon Won Lee and Sun-Young Cho, "Real Length Representation for Virtual Objects," point paper, University of Suwon, Korea, June 2007.',name='reference'),
    meta(content='X3D scaling and metadata convenience nodes',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/PhysicalUnitRepresentationPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    #  Initial approach: direct scaling 
    children=[
    WorldInfo(title='PhysicalUnitRepresentationPrototypes.x3d'),
    Transform(DEF='MyZeptoScale',scale=(1.0E-10,1.0E-10,1.0E-10),
      children=[
      Transform(scale=(1.0E-11,1.0E-11,1.0E-11),
        metadata=MetadataString(name='lengthUnit',value=["ZEPTO meters"]),
        #  scaled content goes here 
        children=[
        Shape(
          geometry=Box(),)])]),
    #  ==================== 
    #  Second approach: prototype nodes for scaling 
    #  ==================== 
    ProtoDeclare(appinfo='ZeptoScale applies a uniform scale factor of 10^-21 to all children',name='ZeptoScale',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='children',type='MFNode',
          #  initialization: NULL node 
          )]
        #  TODO: can add other fields for Transform node here to ensure completeness 
        ),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='ZeptoScale',scale=(1.0E-10,1.0E-10,1.0E-10),
          children=[
          Transform(scale=(1.0E-11,1.0E-11,1.0E-11),
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='children')]))])])),
    #  ==================== 
    #  Example use of prototype: the following should be very very small... 
    ProtoInstance(name='ZeptoScale',
      fieldValue=[
      fieldValue(name='children',
        children=[
        Shape(
          geometry=Sphere(),)])]),
    #  ==================== 
    Background(groundColor=[(0.25,0.25,0.25)],skyColor=[(0.25,0.25,0.25)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PhysicalUnitRepresentationPrototypes.py")
