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
    GeoViewpoint(description='GeoViewpoint_3_03',geoSystem=['GDC'],position=(0.8445483343071585,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-6.x3d'],child2Url=['../../tiles/4/Malacca0-7.x3d'],child3Url=['../../tiles/4/Malacca1-6.x3d'],child4Url=['../../tiles/4/Malacca1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[29,26,17,11,21,17,37,37,58,41,41,34,48,50,26,15,22,24,27,31,30,34,6,13,10,4,4,6,10,28,52,28,32,19,47,40,17,27,10,30,30,32,33,36,20,6,14,27,31,18,6,15,18,14,9,24,48,25,22,11,10,10,33,31,33,33,26,12,28,31,43,22,23,3,12,35,9,20,21,15,20,8,18,16,27,9,31,30,15,26,24,43,24,34,23,20,6,6,15,11,24,43,24,20,28,21,18,24,29,29,6,30,37,61,36,32,20,28,12,17,8,6,32,19,13,25,31,12,11,29,30,30,24,45,75,60,64,52,51,38,24,21,20,10,17,10,22,10,27,31,5,9,32,32,15,59,75,49,85,50,47,61,26,21,14,31,22,5,6,27,28,28,25,8,30,31,32,53,82,70,59,53,56,40,27,9,24,19,2,29,24,5,21,11,1,4,23,23,38,66,63,60,54,48,37,12,35,8,14,11,24,29,36,21,9,8,7,3,9,16,71,67,58,62,33,39,18,10,17,14,2,29,36,35,35,16,26,31,13,19,7,24,71,63,47,49,49,36,19,23,25,6,23,31,34,35,31,22,34,26,3,28,13,17,51,41,26,52,26,10,7,17,16,28,25,26,37,20,36,36,35,29,4,20,7,11,47,41,26,14,13,6,16,5,16,23,24,29,33,39,33,30,33,25,6,7,13,29,26,21,11,15,6,10,17,12,27,40,35,29,18,38,26,32,36,24,4,5,12,24,22,17,6,4,20,22,19,28,38,29,31,10,37,33,35,30,27,35,23,3,7,8,15,4,1,11,21,31,45,41,51,38,24,26,33,3,34,31,30,29,31,11,6,19,4,6,2,27,18,28,45,59,35,18,28,30,29,32,35,31,27,29,29,7,2,10,33,30,7,30,9,46,33,29,29,11,31,21,20,32,30,33,27,4,33,18,2,0,46,23,15,17,23,38,13,16,6,27,38,34,32,39,30,36,26,4,25,10,2,1,36,11,10,8,34,22,15,6,6,4,36,37,38,35,39,30,27,35,3,10,4,8,38,13,9,6,35,31,14,8,6,4,37,39,37,36,40,30,28,35,3,9,3,9],
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
