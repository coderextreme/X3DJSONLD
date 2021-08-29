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
    meta(content='SriCampus040.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus040.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus040.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-6',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,59,58,-1,58,59,57,56,-1,56,57,55,54,-1,54,55,53,52,-1,52,53,51,50,-1,50,51,49,48,-1,48,49,47,46,-1,46,47,45,44,-1,44,45,43,42,-1,42,43,41,40,-1,40,41,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,-1,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-40-VERTICES',point=[(-0.94162315,0.0,-0.61138356),(-0.94162315,-20.0,-0.61138356),(-0.67147255,0.3061002,4.852786),(-0.67147255,-20.0,4.852786),(2.0251758,0.3061002,6.2416935),(2.0251758,-20.0,6.2416935),(-1.721502,0.3061002,13.676138),(-1.721502,-20.0,13.676138),(-3.753313,0.3061002,12.301378),(-3.753313,-20.0,12.301378),(-20.62186,0.3061002,16.239174),(-20.62186,-20.0,16.239174),(-21.888985,0.3061002,18.195826),(-21.888985,-20.0,18.195826),(-17.704275,0.3061002,34.900806),(-17.704275,-20.0,34.900806),(-15.958612,0.3061002,35.91555),(-15.958612,-20.0,35.91555),(-33.198566,0.3061002,64.62837),(-33.198566,-20.0,64.62837),(-34.868053,0.3061002,63.744045),(-34.868053,-20.0,63.744045),(-51.541622,0.3061002,67.51815),(-51.541622,-20.0,67.51815),(-52.99738,0.3061002,70.2384),(-52.99738,-20.0,70.2384),(-48.701405,0.3061002,85.57563),(-48.701405,-20.0,85.57563),(-54.51081,0.3061002,93.14447),(-54.51081,-20.0,93.14447),(-58.287952,0.3061002,93.97532),(-58.287952,-20.0,93.97532),(-65.17868,0.3061002,67.20361),(-65.17868,-20.0,67.20361),(-61.053066,0.3061002,66.41481),(-61.053066,-20.0,66.41481),(-57.94316,0.3061002,61.53572),(-57.94316,-20.0,61.53572),(-59.450138,0.3061002,57.47865),(-59.450138,-20.0,57.47865),(-38.939983,0.3061002,52.850548),(-38.939983,-20.0,52.850548),(-37.600613,0.3061002,50.175613),(-37.600613,-20.0,50.175613),(-39.699406,0.3061002,43.012447),(-39.699406,-20.0,43.012447),(-38.616226,0.3061002,40.847885),(-38.616226,-20.0,40.847885),(-29.84179,0.3061002,38.457077),(-29.84179,-20.0,38.457077),(-28.553865,0.3061002,36.31677),(-28.553865,-20.0,36.31677),(-34.09173,0.3061002,15.719643),(-34.09173,-20.0,15.719643),(-30.079496,0.3061002,15.208618),(-30.079496,-20.0,15.208618),(-26.946327,0.3061002,9.890207),(-26.946327,-20.0,9.890207),(-28.663782,0.3061002,6.0784883),(-28.663782,-20.0,6.0784883)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus040.py")
