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
    GeoViewpoint(description='GeoViewpoint_2_12',geoSystem=['GDC'],position=(-1.6675815493135304,102.91900048008048,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-1.6675815493135304,102.91900048008048,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca2-4.x3d'],child2Url=['../../tiles/3/Malacca2-5.x3d'],child3Url=['../../tiles/3/Malacca3-4.x3d'],child4Url=['../../tiles/3/Malacca3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[4,3,0,2,3,2,2,37,165,347,471,129,127,130,70,74,53,42,37,25,19,18,3,3,2,3,2,5,49,206,611,927,582,123,75,110,47,50,48,40,19,22,16,19,3,2,3,4,6,68,224,1333,1305,595,107,79,72,54,61,65,20,25,24,14,12,12,3,3,3,4,148,117,380,1463,1650,212,53,50,43,62,67,29,12,11,5,4,7,7,5,4,3,73,210,706,1030,1380,299,66,40,29,34,48,20,12,25,37,7,4,10,13,3,5,38,330,536,1838,1087,244,351,118,39,32,31,30,35,30,11,4,8,7,4,5,3,6,95,390,851,2072,630,271,149,75,65,63,73,40,44,31,7,5,2,3,2,3,28,14,403,1382,989,636,352,125,101,40,82,88,59,64,31,44,35,3,4,5,4,4,7,55,1154,799,1009,633,126,126,48,48,45,104,61,39,28,9,5,24,5,16,5,5,11,883,947,1330,973,398,208,82,73,171,59,50,46,12,15,29,27,25,23,2,1,2,519,1871,2005,994,750,187,89,95,54,34,70,19,26,50,23,16,31,6,1,1,2,1,1052,613,575,287,224,135,77,54,63,39,59,84,21,18,7,6,31,29,3,3,2,2,1446,802,362,310,119,94,75,54,105,123,56,28,76,20,6,9,16,26,3,3,2,2,1230,635,205,207,90,81,82,115,295,238,212,18,19,2,5,5,3,3,2,5,0,1,405,904,201,244,143,122,230,444,126,192,28,25,6,6,1,1,4,1,2,2,4,4,165,531,145,105,81,98,118,116,30,24,11,10,6,1,1,3,1,2,5,3,0,1,303,502,262,144,68,28,22,37,9,28,5,5,6,7,2,1,3,18,52,4,1,1,684,420,98,77,89,90,39,32,29,32,20,4,4,5,12,2,4,1,3,0,0,3,193,37,72,112,118,53,42,29,31,7,17,9,6,13,5,1,2,2,28,4,2,5,129,104,40,54,36,30,51,27,36,21,24,11,14,6,6,3,0,2,1,3,5,6,114,101,48,22,20,17,25,19,28,23,14,9,7,7,4,2,1,5,3,4,3,3,84,109,48,22,27,13,25,21,27,17,15,9,8,9,4,2,3,8,1,3,4,3],
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
