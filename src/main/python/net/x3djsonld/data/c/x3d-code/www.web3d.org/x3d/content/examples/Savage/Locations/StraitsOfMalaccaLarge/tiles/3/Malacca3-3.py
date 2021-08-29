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
    GeoViewpoint(description='GeoViewpoint_3_33',geoSystem=['GDC'],position=(-0.6602065014657861,99.88675033605634,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-0.6602065014657861,99.88675033605634,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca6-6.x3d'],child2Url=['../../tiles/4/Malacca6-7.x3d'],child3Url=['../../tiles/4/Malacca7-6.x3d'],child4Url=['../../tiles/4/Malacca7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135309,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[4,133,99,40,104,3,3,3,1,1,0,14,-10,0,8,5,2,2,0,9,360,394,26,80,194,29,5,0,2,1,4,1,3,3,-8,8,7,8,6,3,8,92,1096,941,149,172,87,11,4,3,1,3,4,2,9,0,10,11,9,9,0,5,309,403,975,849,94,89,90,6,3,1,1,3,2,5,8,-2,15,11,3,13,6,166,528,527,1985,1928,172,99,12,-5,4,4,1,2,3,0,6,8,11,0,0,10,8,43,877,1630,1997,1517,151,31,4,0,2,2,3,1,2,-4,-4,6,0,-2,0,19,159,89,1674,1930,1151,1616,72,20,0,0,1,9,4,0,-2,2,-4,-4,0,0,-2,14,228,1373,1540,1549,1212,1310,73,4,2,0,2,3,-5,7,-2,-2,2,-4,0,0,0,-5,859,1057,1750,1627,1283,861,1,0,1,2,0,3,2,3,3,2,2,2,9,8,17,8,318,1723,739,1094,677,516,6,2,1,1,-2,3,10,2,3,0,2,2,14,9,8,92,887,1279,399,536,576,276,2,2,1,2,2,19,-1,10,-7,0,0,2,7,14,15,776,1136,379,623,515,173,173,0,0,1,4,0,6,-1,-1,-6,-8,0,0,0,44,63,558,1018,366,515,285,163,184,0,7,-4,0,0,0,6,-1,0,-6,-8,-1,25,177,284,642,510,526,414,253,346,305,0,0,3,0,0,0,0,0,6,0,-6,45,196,1139,764,1295,2199,701,863,466,517,405,1,2,0,0,0,0,-29,0,0,6,7,49,250,451,1294,931,1032,633,1249,507,636,780,2,1,0,16,0,-29,0,4,0,0,15,21,208,1345,733,922,950,523,501,1143,583,390,0,0,-1,-1,2,0,4,-4,5,6,11,19,111,346,1373,1180,634,617,750,328,371,248,2,3,0,3,-2,-1,-3,0,4,9,71,286,157,332,601,976,457,1097,995,643,218,315,1,-6,15,0,3,1,2,4,6,18,149,1769,827,741,1635,1601,716,288,149,323,176,126,1,1,10,0,6,5,14,11,12,23,119,589,1218,1049,885,562,741,151,446,151,155,296,0,7,0,30,29,22,41,61,99,248,570,1000,580,1352,838,526,197,430,215,89,191,96,0,17,1,32,29,21,41,62,104,296,598,974,639,1319,814,536,202,386,197,96,182,143],
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
