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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='TestMetadataNodes.x3d',name='title'),
    meta(content='Test parentage and type checking of MetadataNodes.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='12 March 2005',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-IS-X3DAbstractSpecification/Part01/components/core.html#Nodereference',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/X3dTooltips.html#MetadataDouble',name='reference'),
    meta(content='metadata nodes test',name='subject'),
    meta(content='final MetadataString is legal X3D but will cause error when translating to VRML97 due to illegal parent.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestMetadataNodes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestMetadataNodes.x3d'),
    Group(
      metadata=MetadataSet(DEF='M1',
        metadata=MetadataString(DEF='M2',value=["internal","metadata"]),
        value=[
        MetadataDouble(DEF='M3',value=[1.0]),
        #  comment 
        MetadataFloat(DEF='M4',value=[1.0]),
        MetadataInteger(DEF='M5',value=[1]),
        MetadataSet(DEF='M6',
          #  suppress warning 
          )])),
    NavigationInfo(
      metadata=MetadataString(name='Test illegal parent under VRML97'))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestMetadataNodes.py")
