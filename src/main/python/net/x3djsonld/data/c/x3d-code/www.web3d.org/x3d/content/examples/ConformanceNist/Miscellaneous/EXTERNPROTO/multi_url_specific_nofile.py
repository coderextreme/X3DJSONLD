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
    meta(content='multi_url_specific_nofile.x3d',name='title'),
    meta(content='multi_url_specific_nofile-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This tests browser ability to select a specific PROTO if a "#PROTOname" is supplied at the end of the URL in a "list" of URLs, but one of the URL files does not exist. Two wrl file URLs are contained in the file URL list at the end of the EXTERNPROTO declaration, however the first file does not exist. The second file contains 3 PROTOs, with one matching the PROTO name of "Red_sphere" specified after the EXTERNPROTO statement. Because the first file does not exist, the browser should continue its search for the PROTO name in the next URL, and find the matching PROTO name. This PROTO should be used, and rendered as a red Sphere.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/EXTERNPROTO/multi_url_specific_nofile.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='multi_url_specific_nofile.x3d'),
    ExternProtoDeclare(name='Red_sphere',url=["some_proto_file.x3d#Red_sphere","second_proto_file.x3d#Red_sphere","https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/EXTERNPROTO/some_proto_file.x3d#Red_sphere","https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/EXTERNPROTO/second_proto_file.x3d#Red_sphere","some_proto_file.wrl#Red_sphere","second_proto_file.wrl#Red_sphere","https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/EXTERNPROTO/some_proto_file.wrl#Red_sphere","https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/EXTERNPROTO/second_proto_file.wrl#Red_sphere"]),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Transform(
      children=[
      ProtoInstance(DEF='MYPROTO',name='Red_sphere')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for multi_url_specific_nofile.py")
