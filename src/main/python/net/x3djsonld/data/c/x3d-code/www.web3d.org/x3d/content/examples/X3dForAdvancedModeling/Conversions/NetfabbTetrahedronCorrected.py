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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='NetfabbTetrahedronCorrected.x3d',name='title'),
    meta(content='Corrected version of exported model: test Netfabb import and export with simplest mesh closed solid.',name='description'),
    meta(content='Vincent Marchetti',name='creator'),
    meta(content='NetfabbConversionIssues.txt',name='reference'),
    meta(content='NetfabbTetrahedronReadme.txt',name='reference'),
    meta(content='Netfabb Professional, https://www.autodesk.com/products/netfabb',name='generator'),
    meta(content='2.0.0',name='version'),
    meta(content='1 October 2017',name='created'),
    meta(content='4 October 2017',name='translated'),
    meta(content='19 March 2020',name='modified'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Conversions/NetfabbTetrahedronCorrected.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Conversions/NetfabbTetrahedronCorrected.x3d',name='identifier'),
    meta(content='Netfabb, https://www.autodesk.com/products/netfabb',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Copyright (c) Web3D Consortium Inc. 2017',name='rights'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Correction applied: added NavigationInfo node 
    children=[
    WorldInfo(title='NetfabbTetrahedronCorrected.x3d'),
    NavigationInfo(type=["ANY"]),
    Shape(
      geometry=IndexedFaceSet(colorIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],coordIndex=[0,1,2,-1,0,3,1,-1,0,2,3,-1,2,1,3,-1],normalPerVertex=False,
        coord=Coordinate(point=[(0.000000,0.000000,0.610000),(0.290000,-0.500000,-0.200000),(0.290000,0.500000,-0.200000),(-0.580000,0.000000,-0.200000)]),
        #  Correction applied: changed the A=alpha parameter in ColorRGBA value from 0 to 1 in order to make visible 
        color=ColorRGBA(color=[(1.000000,0.000000,0.000000,1.000000)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NetfabbTetrahedronCorrected.py")
