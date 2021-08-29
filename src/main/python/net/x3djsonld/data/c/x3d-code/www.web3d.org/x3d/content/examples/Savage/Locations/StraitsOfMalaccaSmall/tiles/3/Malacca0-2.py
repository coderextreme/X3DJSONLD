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
    GeoViewpoint(description='GeoViewpoint_3_02',geoSystem=['GDC'],position=(0.8445483343071585,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-4.x3d'],child2Url=['../../tiles/4/Malacca0-5.x3d'],child3Url=['../../tiles/4/Malacca1-4.x3d'],child4Url=['../../tiles/4/Malacca1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[113,109,115,235,156,71,69,56,39,57,47,51,87,70,54,51,28,25,25,31,26,29,97,98,208,145,74,76,53,55,44,45,48,32,76,38,18,16,23,25,32,30,24,6,99,206,117,73,63,55,60,45,79,81,54,54,38,25,38,27,18,19,13,10,22,20,152,109,74,66,59,70,58,47,62,80,71,76,42,45,28,30,33,24,21,25,21,26,148,78,77,66,70,64,64,58,56,67,53,46,43,32,26,34,30,35,21,25,21,15,104,65,80,89,104,66,55,65,57,79,93,45,35,32,27,26,26,25,18,29,20,6,87,76,63,86,69,58,62,40,47,58,35,38,29,27,30,34,24,20,14,26,14,24,84,70,53,64,65,55,46,45,40,69,30,29,24,29,31,24,24,16,12,13,24,15,68,66,63,49,59,59,50,43,35,29,25,24,31,23,22,23,21,19,14,26,41,32,59,64,75,64,54,51,46,41,34,26,33,16,24,21,12,18,23,13,21,26,47,38,65,80,162,62,54,45,42,33,33,29,24,19,38,23,25,18,19,22,34,49,63,71,54,197,79,93,98,59,40,36,49,26,42,22,41,34,24,20,19,22,55,70,60,71,72,54,76,79,64,55,37,49,49,40,40,42,51,49,28,25,23,35,72,71,54,51,50,49,92,76,57,40,36,52,56,42,45,41,55,33,30,23,25,46,53,46,50,47,52,53,86,49,41,34,43,47,54,45,54,54,53,34,29,19,15,30,47,37,32,26,35,59,49,39,49,45,30,25,36,33,58,47,35,41,27,29,15,20,23,19,24,22,44,30,41,39,37,33,27,23,20,48,47,56,24,47,43,33,36,16,16,28,6,15,38,35,31,31,27,41,37,34,28,20,48,53,47,43,48,40,42,16,24,19,4,4,39,34,30,32,28,36,35,35,20,18,47,46,45,43,43,44,39,39,31,32,32,33,37,35,29,35,23,37,43,31,29,15,38,34,35,38,40,38,36,33,29,22,36,46,37,31,30,29,29,16,36,33,27,28,34,39,39,33,34,36,23,23,32,52,38,36,37,29,29,26,31,17,36,34,25,27,29,39,37,32,34,38,23,23,33,49,38,38],
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
