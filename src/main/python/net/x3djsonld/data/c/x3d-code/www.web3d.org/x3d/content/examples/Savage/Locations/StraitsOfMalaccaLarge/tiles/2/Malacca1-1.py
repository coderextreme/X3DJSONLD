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
    GeoViewpoint(description='GeoViewpoint_2_11',geoSystem=['GDC'],position=(-1.6675815493135304,98.87600028804829,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-1.6675815493135304,98.87600028804829,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca2-2.x3d'],child2Url=['../../tiles/3/Malacca2-3.x3d'],child3Url=['../../tiles/3/Malacca3-2.x3d'],child4Url=['../../tiles/3/Malacca3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,3,3,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,5,5,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,4,2,3,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,5,3,4,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,12,-2,1,4,111,0,0,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,1,0,12,0,203,3,3,2,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,0,0,4,2,1,2,0,2,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,3,2,2,5,4,3,3,4,27,28,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,7,7,1,125,2,1,3,4,4,7,7,-99,-99,-99,-99,-99,-99,9,6,4,5,2,5,2,0,2,2,7,0,5,5,9,11,-99,-99,-99,-99,-99,-99,11,0,0,8,6,73,77,4,2,6,-10,6,6,4,540,519,-99,-99,-99,-99,-99,-99,7,12,8,8,116,47,3,2,5,6,10,10,12,33,995,1052,-99,-99,-99,-99,-99,-99,2,5,4,67,177,19,3,1,7,4,18,1,1,899,1424,1446,-99,-99,-99,-99,-99,-99,1,5,2,25,86,-2,3,3,-2,-4,0,6,163,1590,1225,1230,-99,1,0,1,2,0,3,3,1,6,0,0,0,2,3,2,7,3,463,765,421,405,-99,0,0,1,2,2,3,1,0,0,7,1,2,-1,0,2,8,17,1225,898,166,165,-99,2,2,0,1,1,1,0,26,0,1,-4,0,5,25,0,87,287,558,529,294,303,-99,1,3,1,2,0,0,1,62,2,2,0,0,5,9,9,260,1117,1054,1278,670,684,-99,2,2,0,1,0,3,1,8,2,0,-1,2,2,0,13,143,1289,789,813,150,193,-99,2,3,0,2,1,9,-7,0,49,2,12,1,0,7,191,585,1822,664,157,122,129,-99,6,2,4,5,2,3,1,5,8,-3,0,31,33,107,695,338,538,221,120,98,114,-99,3,2,2,5,1,3,4,4,6,-1,1,31,36,109,649,332,470,238,117,80,84],
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
