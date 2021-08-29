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
    GeoViewpoint(description='GeoViewpoint_3_34',geoSystem=['GDC'],position=(2.752923424950107,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.752923424950107,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca6-8.x3d'],child2Url=['../../tiles/4/Malacca6-9.x3d'],child3Url=['../../tiles/4/Malacca7-8.x3d'],child4Url=['../../tiles/4/Malacca7-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[64,72,19,42,57,50,59,99,87,35,37,152,1022,231,60,39,15,15,18,23,23,49,42,57,54,50,57,57,182,99,100,47,47,72,142,66,86,18,31,8,27,12,28,29,21,86,97,73,100,73,79,119,448,86,84,50,63,77,37,49,17,23,29,23,56,51,22,78,160,120,78,69,91,84,139,57,99,92,64,47,57,21,18,21,26,40,33,49,50,33,532,78,222,182,119,90,73,61,73,73,55,57,45,16,24,19,34,56,47,41,33,91,596,187,172,301,74,55,116,71,77,74,51,61,42,15,26,18,25,42,51,47,62,234,528,158,172,135,91,63,59,59,62,45,33,62,29,12,28,44,43,53,43,62,151,235,225,171,171,261,134,65,61,51,35,38,51,59,32,19,43,49,42,78,48,64,620,494,574,246,134,133,161,79,76,55,42,56,25,26,36,26,196,34,74,74,85,71,402,137,573,317,144,106,138,117,71,46,60,51,37,33,37,20,20,43,52,70,67,70,692,111,190,136,174,90,88,81,88,81,84,57,54,46,37,18,31,31,112,105,75,66,228,189,192,102,135,149,78,68,84,53,66,78,65,54,38,31,35,64,89,62,72,64,154,153,273,118,124,91,75,137,90,69,98,72,61,75,40,29,53,54,58,75,61,87,288,223,142,139,104,77,83,73,72,72,82,61,59,72,39,51,65,68,48,70,60,57,295,214,348,341,151,83,148,79,60,75,74,71,60,71,39,46,60,42,56,50,69,77,282,344,141,188,128,75,87,67,69,68,71,67,61,75,47,66,47,59,58,58,79,85,635,565,610,174,109,87,73,73,60,61,73,74,59,45,48,59,68,31,64,52,50,57,461,552,270,360,92,87,73,76,59,69,75,91,58,84,62,60,51,35,65,41,51,66,203,622,149,137,119,104,238,84,64,52,67,50,78,60,57,65,60,42,56,35,50,48,174,194,154,93,101,188,106,87,60,82,61,67,50,58,75,61,58,44,48,54,30,59,177,331,119,83,99,290,89,86,58,53,63,53,50,44,57,70,63,39,66,73,49,26,175,352,123,83,97,245,87,72,56,51,60,51,51,45,59,68,64,36,66,67,44,34],
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
