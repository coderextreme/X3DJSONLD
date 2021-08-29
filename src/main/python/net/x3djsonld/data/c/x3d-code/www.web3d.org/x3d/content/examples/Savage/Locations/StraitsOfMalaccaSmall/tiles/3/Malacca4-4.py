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
    GeoViewpoint(description='GeoViewpoint_3_44',geoSystem=['GDC'],position=(3.3890484551644233,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3890484551644233,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca8-8.x3d'],child2Url=['../../tiles/4/Malacca8-9.x3d'],child3Url=['../../tiles/4/Malacca9-8.x3d'],child4Url=['../../tiles/4/Malacca9-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[175,352,123,83,97,245,87,72,56,51,60,51,51,45,59,68,64,36,66,67,44,34,157,157,112,77,108,207,89,82,69,54,53,49,62,42,85,74,92,45,47,33,41,26,232,112,88,100,370,344,71,58,58,51,59,61,46,84,74,82,66,65,70,37,30,29,344,346,82,65,113,623,62,59,66,46,64,62,34,55,111,93,66,54,116,73,38,80,538,261,90,60,517,86,66,49,60,48,32,41,46,76,106,89,66,52,73,264,144,210,270,199,78,58,79,63,61,46,51,55,37,52,57,66,83,186,259,163,180,40,89,259,478,92,101,54,59,59,88,46,40,61,46,55,66,98,71,93,381,98,116,43,137,342,521,214,120,85,93,54,54,65,46,43,32,51,51,101,165,223,76,51,59,52,121,89,229,173,88,63,53,42,75,54,38,49,39,47,77,321,204,185,70,57,57,97,104,73,99,180,105,95,57,60,79,65,45,35,35,28,79,147,309,203,72,63,142,49,91,106,97,95,89,82,67,92,50,53,35,34,61,56,72,58,228,509,59,80,97,44,105,58,108,94,106,95,77,69,56,46,47,45,35,50,47,63,76,245,296,239,197,95,39,34,123,99,85,200,67,102,61,45,48,45,26,56,47,55,62,323,302,339,262,64,27,56,77,73,108,82,72,66,64,44,59,52,56,33,34,47,114,41,107,33,35,39,46,44,80,110,66,128,82,81,62,37,47,58,63,47,40,79,47,42,33,38,26,37,71,63,61,81,221,45,56,55,51,58,49,39,64,23,32,42,206,65,62,124,51,43,34,37,98,73,60,49,66,48,51,37,43,37,49,60,46,52,34,105,69,34,180,159,128,71,71,75,66,71,47,53,60,43,65,43,58,47,73,29,74,54,26,44,138,39,123,162,84,98,67,66,63,64,44,54,46,48,58,51,43,25,88,36,142,74,115,61,335,274,80,405,93,68,72,55,49,44,91,52,60,75,54,43,38,57,48,86,67,194,171,82,101,386,450,103,80,68,49,49,92,64,74,78,37,28,91,256,177,34,78,115,79,93,105,359,468,96,73,73,48,47,94,74,75,89,36,30,77,282,169,34,65,118,80,97],
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
