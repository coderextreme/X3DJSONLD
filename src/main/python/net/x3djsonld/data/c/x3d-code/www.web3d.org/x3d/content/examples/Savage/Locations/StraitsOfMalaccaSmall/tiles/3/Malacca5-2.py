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
    GeoViewpoint(description='GeoViewpoint_3_52',geoSystem=['GDC'],position=(4.0251734853787395,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.0251734853787395,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca10-4.x3d'],child2Url=['../../tiles/4/Malacca10-5.x3d'],child3Url=['../../tiles/4/Malacca11-4.x3d'],child4Url=['../../tiles/4/Malacca11-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[0,0,2,3,1,4,2,1,1,0,1,0,2,1,5,3,25,24,26,17,21,24,1,1,1,0,1,0,0,2,0,0,0,1,0,3,3,10,20,20,19,16,7,7,0,2,2,1,1,1,1,0,1,2,1,-1,3,3,3,11,12,20,14,7,15,18,0,2,1,1,0,0,1,1,0,3,0,0,2,7,3,4,4,10,10,7,13,16,0,1,0,0,2,1,0,1,0,1,0,7,8,4,5,6,7,9,5,30,15,53,8,0,0,1,0,1,1,2,1,3,4,5,8,9,8,8,10,8,11,15,27,22,0,0,0,1,0,0,1,0,1,4,8,7,6,7,5,7,8,8,7,31,28,50,1,0,1,1,1,0,1,1,-3,2,3,8,6,6,6,6,7,10,19,23,42,60,3,2,1,0,3,0,2,5,6,6,7,7,6,7,5,8,8,9,11,17,35,145,0,0,0,0,1,1,-3,9,4,4,5,7,4,4,9,10,11,14,17,24,92,98,0,0,1,3,1,1,6,9,2,3,3,7,5,8,11,11,4,8,24,30,29,39,1,0,2,0,2,0,3,9,5,3,6,6,4,2,7,6,7,18,30,67,77,50,0,-1,-4,3,0,1,0,0,21,6,2,5,4,2,7,8,12,11,21,27,40,48,-4,0,1,4,1,0,0,3,4,-5,7,5,5,8,7,3,6,7,26,22,46,37,2,3,1,1,-1,0,4,-4,3,3,4,3,2,2,11,4,22,19,29,26,38,39,-11,-3,-1,0,-1,-1,0,-9,6,9,6,3,5,3,4,3,9,19,38,39,33,53,-1,2,1,0,-2,0,-5,9,10,10,11,6,9,10,8,10,18,30,25,43,56,46,0,6,0,1,2,0,8,5,4,11,14,9,10,19,6,11,23,26,39,44,42,83,-3,-1,18,61,285,4,6,14,15,15,11,14,13,6,8,12,23,31,39,63,73,66,-1,-2,2,6,98,4,9,11,15,12,15,14,61,14,3,21,24,19,42,63,61,75,0,-1,10,-11,45,1,10,14,19,12,15,20,15,13,10,12,16,20,39,50,237,254,0,0,11,-5,58,1,4,14,19,12,15,21,15,8,10,11,16,21,41,50,269,283],
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
