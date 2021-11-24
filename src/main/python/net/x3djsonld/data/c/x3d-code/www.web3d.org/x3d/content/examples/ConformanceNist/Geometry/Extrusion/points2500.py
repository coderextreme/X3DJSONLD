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
    meta(content='points2500.x3d',name='title'),
    meta(content='2500points-front.jpg',name='Image'),
    meta(content='2500points-rear.jpg',name='Image'),
    meta(content='2500points-top.jpg',name='Image'),
    meta(content='2500points-bottom.jpg',name='Image'),
    meta(content='2500points-left.jpg',name='Image'),
    meta(content='2500points-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This test attempts to draw an Extrusion using the minimum required number of points. The number of points in crossSection * number of points in spine <= 2500 (100 * 25 = 2500). The test should generate a "U" shaped like extrusion.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Geometry/Extrusion/points2500.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='points2500.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Transform(translation=(0,0,-10),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(crossSection=[(1.5,0),(1.44,0.42),(1.38,0.5879),(1.32,0.7125),(1.26,0.8139),(1.2,0.9),(1.14,0.9749),(1.08,1.041),(1.02,1.0998),(0.96,1.1526),(0.9,1.2),(0.84,1.2427),(0.78,1.2812),(0.72,1.3159),(0.66,1.347),(0.6,1.3748),(0.54,1.3994),(0.48,1.4211),(0.42,1.44),(0.36,1.4562),(0.3,1.4697),(0.24,1.4807),(0.18,1.4892),(0.12,1.4952),(0.06,1.4988),(0,1.5),(-0.06,1.4988),(-0.12,1.4952),(-0.18,1.4892),(-0.24,1.4807),(-0.3,1.4697),(-0.36,1.4562),(-0.42,1.44),(-0.48,1.4211),(-0.54,1.3994),(-0.6,1.3748),(-0.66,1.347),(-0.72,1.3159),(-0.78,1.2812),(-0.84,1.2427),(-0.9,1.2),(-0.96,1.1526),(-1.02,1.0998),(-1.08,1.041),(-1.14,0.9749),(-1.2,0.9),(-1.26,0.8139),(-1.32,0.7125),(-1.38,0.5879),(-1.44,0.42),(-1.5,0.0012),(-1.44,-0.42),(-1.38,-0.5879),(-1.32,-0.7125),(-1.26,-0.8139),(-1.2,-0.9),(-1.14,-0.9749),(-1.08,-1.041),(-1.02,-1.0998),(-0.96,-1.1526),(-0.9,-1.2),(-0.84,-1.2427),(-0.78,-1.2812),(-0.72,-1.3159),(-0.66,-1.347),(-0.54,-1.3994),(-0.48,-1.4211),(-0.42,-1.44),(-0.36,-1.4562),(-0.3,-1.4697),(-0.24,-1.4807),(-0.18,-1.4892),(-0.12,-1.4952),(-0.06,-1.4988),(0,-1.5),(0.06,-1.4988),(0.12,-1.4952),(0.18,-1.4892),(0.24,-1.4807),(0.3,-1.4697),(0.36,-1.4562),(0.42,-1.44),(0.48,-1.4211),(0.54,-1.3994),(0.6,-1.3748),(0.66,-1.347),(0.72,-1.3159),(0.78,-1.2812),(0.84,-1.2427),(0.9,-1.2),(0.96,-1.1526),(1.02,-1.0998),(1.08,-1.041),(1.14,-0.9749),(1.2,-0.9),(1.26,-0.8139),(1.32,-0.7125),(1.38,-0.5879),(1.44,-0.42),(1.5,0)],solid=False,spine=[(-4,6,0),(-4,5,0),(-4,4,0),(-4,3,0),(-4,2,0),(-4,1,0),(-4,0,0),(-3,-1,0),(-2,-1,0),(-1,-1,0),(0,-1,0),(1,-1,0),(2,-1,0),(3,-1,0),(4,-1,0),(5,-1,0),(6,0,0),(6,1,0),(6,2,0),(6,3,0),(6,4,0),(6,5,0),(6,5,0),(6,5.5,0),(6,6,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for points2500.py")
