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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='SriCampus144.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus144.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus144.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-20',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,63,62,-1,62,63,61,60,-1,60,61,59,58,-1,58,59,57,56,-1,56,57,55,54,-1,54,55,53,52,-1,52,53,51,50,-1,50,51,49,48,-1,48,49,47,46,-1,46,47,45,44,-1,44,45,43,42,-1,42,43,41,40,-1,40,41,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,-1,62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-144-VERTICES',point=[(0.0,0.0,0.0),(0.0,-7.0407944,0.0),(2.8102586,5.8217347E-4,1.958922),(2.8102586,-7.0407944,1.958922),(10.574103,5.8217347E-4,-10.857388),(10.574103,-7.0407944,-10.857388),(13.199548,5.8217347E-4,-8.948593),(13.199548,-7.0407944,-8.948593),(5.8295574,5.8217347E-4,3.4230857),(5.8295574,-7.0407944,3.4230857),(41.758408,5.8217347E-4,26.002077),(41.758408,-7.0407944,26.002077),(39.36192,5.8217347E-4,29.590796),(39.36192,-7.0407944,29.590796),(5.831628,5.8217347E-4,9.183474),(5.831628,-7.0407944,9.183474),(4.6699357,5.8217347E-4,11.858415),(4.6699357,-7.0407944,11.858415),(8.072172,5.8217347E-4,14.052739),(8.072172,-7.0407944,14.052739),(4.7218146,5.8217347E-4,20.438238),(4.7218146,-7.0407944,20.438238),(7.6624994,5.8217347E-4,22.231302),(7.6624994,-7.0407944,22.231302),(5.750554,5.8217347E-4,25.373423),(5.750554,-7.0407944,25.373423),(2.5975978,5.8217347E-4,23.315552),(2.5975978,-7.0407944,23.315552),(-5.28187,5.8217347E-4,36.36905),(-5.28187,-7.0407944,36.36905),(-11.5861025,5.8217347E-4,32.445736),(-11.5861025,-7.0407944,32.445736),(-20.987404,5.8217347E-4,48.86176),(-20.987404,-7.0407944,48.86176),(-18.151278,5.8217347E-4,50.746532),(-18.151278,-7.0407944,50.746532),(-19.595413,5.8217347E-4,53.64291),(-19.595413,-7.0407944,53.64291),(-22.973213,5.8217347E-4,51.473362),(-22.973213,-7.0407944,51.473362),(-34.77971,5.8217347E-4,72.05722),(-34.77971,-7.0407944,72.05722),(-25.5686,5.8217347E-4,77.53747),(-25.5686,-7.0407944,77.53747),(-29.259651,5.8217347E-4,83.89389),(-29.259651,-7.0407944,83.89389),(-38.63613,5.8217347E-4,77.75503),(-38.63613,-7.0407944,77.75503),(-41.76433,5.8217347E-4,84.01526),(-41.76433,-7.0407944,84.01526),(-45.149776,5.8217347E-4,81.58544),(-45.149776,-7.0407944,81.58544),(-25.48445,5.8217347E-4,49.79162),(-25.48445,-7.0407944,49.79162),(-28.459911,5.8217347E-4,48.010544),(-28.459911,-7.0407944,48.010544),(-26.75515,5.8217347E-4,45.284153),(-26.75515,-7.0407944,45.284153),(-24.032537,5.8217347E-4,46.95053),(-24.032537,-7.0407944,46.95053),(1.1625453,5.8217347E-4,4.398523),(1.1625453,-7.0407944,4.398523),(-1.5716726,5.8217347E-4,2.4590256),(-1.5716726,-7.0407944,2.4590256)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus144.py")
