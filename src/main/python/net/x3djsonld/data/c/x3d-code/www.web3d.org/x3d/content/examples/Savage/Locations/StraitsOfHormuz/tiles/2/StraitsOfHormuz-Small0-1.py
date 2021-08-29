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
    GeoViewpoint(description='GeoViewpoint_2_01',geoSystem=['GDC'],position=(25.6730900978689,56.03032222992296,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.6730900978689,56.03032222992296,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small0-2.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small0-3.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small1-2.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[55,42,47,60,88,66,113,113,125,186,183,204,275,476,556,329,367,762,510,250,125,93,51,58,47,67,52,76,91,91,106,122,155,301,234,333,443,203,292,508,576,296,277,313,39,47,41,46,47,54,62,72,86,112,129,160,221,379,539,171,213,419,268,197,127,157,28,32,38,45,63,47,51,60,76,90,148,291,229,329,418,203,142,278,390,106,42,36,26,26,30,48,39,63,44,51,65,196,142,194,242,400,303,416,130,130,438,152,37,30,13,22,31,28,51,63,43,42,49,105,326,144,163,271,372,215,73,58,143,117,131,89,15,19,23,36,68,57,33,30,37,43,135,370,418,416,339,509,274,34,34,64,309,228,9,12,18,16,47,22,22,24,24,28,192,523,712,395,350,837,365,17,8,6,1,0,7,6,8,46,39,65,14,21,17,17,101,448,659,920,667,480,505,54,1,3,0,2,3,5,13,7,32,27,14,19,11,18,35,237,511,1237,1285,863,226,30,1,0,3,0,2,2,6,7,33,34,39,12,12,17,45,203,564,1217,1341,986,216,92,12,5,4,1,1,2,2,12,32,38,35,25,10,22,53,173,773,687,1282,1301,1007,598,196,-2,4,3,1,0,0,2,1,29,31,16,4,13,73,209,162,254,716,1180,1204,635,259,4,3,1,2,2,2,0,1,0,17,12,24,9,85,404,704,750,1073,1365,1536,1206,601,59,0,0,0,0,0,0,3,0,-2,13,4,19,46,296,761,255,636,1238,1074,718,678,514,213,250,0,0,4,0,4,0,0,2,0,21,44,106,354,382,992,777,975,795,729,687,86,98,0,1,0,1,1,0,0,0,0,9,19,113,316,369,573,493,477,800,628,413,407,425,0,4,0,1,1,0,3,0,0,0,6,61,634,178,569,709,326,1163,736,671,486,424,1,0,0,0,3,0,4,4,5,0,72,378,439,419,774,854,410,943,458,419,436,480,0,0,0,0,0,0,0,2,0,2,0,89,517,523,1090,768,522,617,457,412,678,755,0,0,0,0,0,1,0,3,1,1,2,7,745,293,668,1255,652,425,985,976,522,506,0,0,0,1,0,1,1,3,3,1,2,7,707,301,650,1257,660,438,986,998,517,486],
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
