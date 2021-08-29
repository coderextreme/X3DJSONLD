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
    GeoViewpoint(description='GeoViewpoint_3_33',geoSystem=['GDC'],position=(2.752923424950107,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.752923424950107,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca6-6.x3d'],child2Url=['../../tiles/4/Malacca6-7.x3d'],child3Url=['../../tiles/4/Malacca7-6.x3d'],child4Url=['../../tiles/4/Malacca7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[0,0,2,1,0,2,1,2,2,1,2,5,0,2,1,1,7,5,27,13,54,64,0,0,3,0,2,3,2,1,0,4,1,0,2,0,21,0,40,9,16,40,72,42,0,0,0,0,2,1,4,0,2,9,0,1,4,3,24,58,9,15,17,11,29,21,1,0,2,0,7,0,2,0,3,0,1,6,0,-7,13,44,19,11,36,51,28,22,-20,1,2,3,0,2,4,3,4,3,2,4,0,7,25,30,33,20,62,48,32,50,-2,0,4,0,3,1,4,3,2,1,4,3,1,9,51,61,17,45,53,44,30,33,1,-9,1,1,3,0,0,5,2,0,0,2,3,8,25,27,28,52,57,75,40,62,8,4,2,3,3,4,0,0,0,2,5,6,10,23,22,65,36,67,60,75,105,151,3,5,0,0,2,4,1,0,7,6,10,8,5,26,41,57,58,48,76,80,485,620,0,3,5,0,2,0,11,12,11,11,11,7,48,85,72,57,63,57,178,469,490,402,2,0,2,2,1,12,11,18,24,17,22,22,55,60,94,66,46,90,264,439,781,692,1,0,0,3,5,12,7,18,12,17,20,44,54,59,83,78,70,78,192,221,317,228,2,1,0,1,11,10,10,18,22,12,20,40,32,70,177,220,106,71,224,425,226,154,1,2,3,8,10,7,8,7,10,12,13,46,22,98,243,310,180,92,505,768,396,288,1,2,7,7,6,8,13,13,12,13,23,46,68,65,59,87,153,162,653,978,705,295,9,10,13,4,11,5,13,8,4,21,16,31,72,46,55,76,82,388,661,920,320,282,9,11,8,9,7,15,10,11,10,16,62,70,49,30,54,72,144,625,206,495,328,635,5,7,9,4,11,12,12,24,16,39,23,56,83,31,49,60,155,612,210,235,358,461,9,4,7,7,11,12,24,10,15,28,56,73,24,70,43,236,659,371,151,141,177,203,7,1,6,4,11,7,13,10,41,54,42,56,29,68,50,297,372,300,180,145,145,174,4,5,5,6,8,11,8,41,29,81,50,70,35,92,66,188,736,357,154,177,103,177,4,6,5,5,7,9,6,36,33,93,50,68,33,113,58,193,699,374,158,172,104,175],
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
