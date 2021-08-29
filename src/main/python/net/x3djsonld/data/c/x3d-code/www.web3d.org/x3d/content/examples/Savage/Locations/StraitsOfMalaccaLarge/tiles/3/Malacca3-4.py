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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_34',geoSystem=['GDC'],position=(-0.6602065014657861,101.90825043207244,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-0.6602065014657861,101.90825043207244,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca6-8.x3d'],child2Url=['../../tiles/4/Malacca6-9.x3d'],child3Url=['../../tiles/4/Malacca7-8.x3d'],child4Url=['../../tiles/4/Malacca7-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135309,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[394,778,1902,2097,2337,2032,1107,529,476,195,217,160,74,68,98,67,44,48,57,76,30,27,941,1641,1436,847,760,864,613,411,267,237,164,122,83,110,74,74,79,75,51,48,30,49,849,1378,674,642,375,383,298,270,236,184,148,124,63,65,60,41,38,49,42,63,51,53,1928,598,1032,448,523,274,244,198,172,106,82,57,84,53,80,59,63,74,75,182,73,81,1517,685,843,472,301,227,296,177,123,119,96,91,79,81,49,62,71,115,129,90,56,62,1616,804,640,363,394,237,193,147,103,99,89,95,79,53,85,111,127,121,402,117,118,75,1310,885,587,428,213,171,208,163,97,83,64,91,68,112,128,116,257,253,266,188,222,212,861,1245,1418,322,213,162,163,105,86,139,104,105,149,118,153,437,216,254,129,69,17,13,516,805,1039,261,174,130,101,127,193,93,134,162,236,144,330,186,146,209,60,25,28,27,276,276,406,589,225,197,165,117,79,78,144,140,96,72,69,311,206,52,36,21,18,8,173,191,578,316,267,362,94,90,107,63,83,96,107,72,42,231,74,36,18,5,7,10,184,780,460,318,300,79,57,136,131,78,70,69,60,72,35,40,9,32,19,7,8,5,305,738,425,328,268,154,152,45,77,46,36,45,59,35,28,35,41,21,25,5,6,6,405,433,576,493,83,128,97,90,58,77,104,102,44,31,27,36,15,8,30,29,20,26,780,158,239,186,93,81,64,67,81,86,69,69,55,65,32,17,33,27,37,31,20,22,390,211,111,123,54,83,39,134,123,119,86,53,70,59,30,34,36,37,30,17,22,28,248,194,40,87,78,34,104,96,109,97,39,29,26,27,32,23,32,25,13,32,13,14,315,63,93,113,87,51,73,79,87,45,21,20,22,15,25,29,31,33,28,27,30,29,126,194,107,97,18,51,44,34,35,24,25,42,43,54,34,27,30,28,22,25,24,24,296,246,70,61,66,25,29,30,24,27,24,22,86,29,37,23,25,3,25,18,11,8,96,117,112,78,43,28,19,18,17,10,6,45,35,28,17,25,30,28,24,6,9,11,143,119,113,79,43,29,22,17,13,9,6,53,31,26,17,27,30,28,22,7,10,10],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
