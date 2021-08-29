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
    GeoViewpoint(description='GeoViewpoint_2_22',geoSystem=['GDC'],position=(3.7071109702715814,102.96356269830186,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.7071109702715814,102.96356269830186,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca4-4.x3d'],child2Url=['../../tiles/3/Malacca4-5.x3d'],child3Url=['../../tiles/3/Malacca5-4.x3d'],child4Url=['../../tiles/3/Malacca5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[185,171,146,81,64,68,57,84,87,58,17,28,33,20,34,22,5,3,4,3,5,3,360,111,255,61,49,56,56,132,45,100,94,50,56,28,35,10,3,5,6,4,4,4,481,78,103,63,57,33,53,85,234,56,392,57,88,31,34,30,4,5,5,4,4,4,191,112,122,53,42,35,61,168,54,59,121,50,31,13,19,21,5,4,4,6,5,4,104,95,55,54,33,35,56,383,62,174,120,78,72,28,36,20,4,4,3,6,5,5,94,88,76,42,37,39,66,65,464,441,45,20,47,31,34,37,6,5,3,4,4,6,65,83,90,54,40,45,53,146,31,41,69,65,82,34,34,34,4,5,5,4,5,3,70,69,54,38,51,60,43,56,27,83,22,27,20,27,30,14,10,4,6,6,7,7,62,72,63,52,43,44,35,151,43,71,214,41,14,15,9,4,3,4,6,6,4,4,95,222,77,42,124,62,62,47,86,92,94,44,22,10,9,10,6,5,7,8,6,5,129,96,73,52,68,92,54,491,94,58,53,54,38,17,8,4,4,6,3,3,5,5,556,221,104,46,101,64,51,188,529,80,87,60,51,23,9,4,3,5,5,2,4,2,1079,284,177,62,78,89,91,749,81,119,714,399,303,23,15,77,4,5,2,5,2,4,897,184,214,68,57,52,93,139,86,500,368,70,28,25,17,6,3,6,6,4,6,5,593,114,153,72,150,79,143,115,130,431,145,121,30,47,45,5,7,5,8,5,5,5,93,85,116,60,302,195,101,110,454,694,424,67,53,96,49,10,6,5,4,6,6,4,116,140,74,77,412,387,117,271,266,340,213,49,50,73,31,20,7,7,5,7,5,6,168,74,117,92,120,389,286,276,269,440,331,190,82,29,28,10,6,5,6,6,7,6,90,115,117,67,125,88,366,289,292,320,156,112,43,43,22,9,3,5,7,8,5,6,119,147,102,69,147,236,237,601,602,1017,627,99,82,33,19,8,26,6,7,5,6,6,101,226,362,96,325,682,243,298,633,308,734,107,257,65,115,9,40,6,4,6,5,6,109,259,347,98,313,715,245,298,614,303,700,118,273,66,119,9,61,7,7,8,6,7],
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
