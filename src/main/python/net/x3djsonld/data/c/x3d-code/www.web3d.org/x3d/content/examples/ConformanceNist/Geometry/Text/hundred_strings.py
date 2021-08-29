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
    meta(content='hundred_strings.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This test attempts to write 100 strings, as required by the VRML specification. The test should write the strings "string 1", "string 2" thru "string 100".',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Geometry/Text/hundred_strings.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='hundred_strings.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Shape(
      appearance=Appearance(
        material=Material(),),
      geometry=Text(string=["string 1","string 2","string 3","string 4","string 5","string 6","string 7","string 8","string 9","string 10","string 11","string 12","string 13","string 14","string 15","string 16","string 17","string 18","string 19","string 20","string 21","string 22","string 23","string 24","string 25","string 26","string 27","string 28","string 29","string 30","string 31","string 32","string 33","string 34","string 35","string 36","string 37","string 38","string 39","string 40","string 41","string 42","string 43","string 44","string 45","string 46","string 47","string 48","string 49","string 50","string 51","string 52","string 53","string 54","string 55","string 56","string 57","string 58","string 59","string 60","string 61","string 62","string 63","string 64","string 65","string 66","string 67","string 68","string 69","string 70","string 71","string 72","string 73","string 74","string 75","string 76","string 77","string 78","string 79","string 80","string 81","string 82","string 83","string 84","string 85","string 86","string 87","string 88","string 89","string 90","string 91","string 92","string 93","string 94","string 95","string 96","string 97","string 98","string 99","string 100"]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for hundred_strings.py")
