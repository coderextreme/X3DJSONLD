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
    GeoViewpoint(description='GeoViewpoint_3_23',geoSystem=['GDC'],position=(2.116798394735791,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-6.x3d'],child2Url=['../../tiles/4/Malacca4-7.x3d'],child3Url=['../../tiles/4/Malacca5-6.x3d'],child4Url=['../../tiles/4/Malacca5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[11,5,-7,5,7,8,30,20,32,27,27,-2,5,0,2,4,2,3,3,2,5,2,12,2,1,2,8,28,33,26,34,28,26,1,2,2,5,2,0,4,3,2,2,2,15,3,4,5,28,29,29,29,28,31,25,5,4,1,0,2,2,0,1,4,3,3,3,3,-8,7,30,27,28,32,28,33,25,13,5,3,2,5,1,0,4,3,1,3,8,4,6,8,33,33,29,33,30,28,6,6,3,5,3,1,5,2,2,1,4,3,8,1,0,6,32,36,30,29,30,24,15,9,3,4,5,3,3,2,1,5,2,3,21,2,1,24,32,29,29,17,6,5,3,13,10,2,1,3,3,3,2,1,2,6,14,6,0,25,29,2,7,8,6,6,1,7,3,4,5,5,2,3,3,3,3,2,32,4,0,28,1,4,3,3,10,3,7,2,6,1,2,3,4,4,3,3,5,3,8,7,0,-4,1,2,-10,12,3,5,5,2,3,4,2,4,4,4,2,3,2,3,11,-2,-3,1,-4,-2,-5,-13,1,10,7,5,3,1,2,2,6,5,5,3,6,6,-6,-14,8,0,-6,-6,-11,-24,0,3,2,3,1,3,3,4,4,5,5,5,4,5,0,8,8,-6,-6,-8,-1,1,3,4,3,3,1,5,4,3,4,5,5,4,7,5,2,-10,8,8,7,1,6,2,3,3,1,4,2,3,5,4,3,3,3,5,7,4,-12,-10,12,8,6,4,2,6,3,2,2,4,3,4,2,4,2,4,4,5,4,3,0,9,-7,7,0,5,2,1,3,1,2,3,5,4,1,3,4,4,6,5,2,6,-1,-32,-12,-1,1,2,5,3,4,2,1,0,3,4,5,2,4,3,4,6,6,12,0,0,6,4,4,0,4,0,3,0,2,3,2,1,4,1,3,3,5,4,56,46,-14,-3,3,1,1,2,2,2,6,3,4,1,3,4,2,2,3,3,5,9,38,38,-1,0,3,1,1,6,3,1,4,1,0,3,4,0,2,1,3,3,7,32,15,38,0,0,3,1,0,7,4,2,3,0,3,4,1,1,2,3,5,3,36,12,57,64,0,0,2,1,0,2,1,2,2,1,2,5,0,2,1,1,7,5,27,13,54,64],
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
