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
    GeoViewpoint(description='GeoViewpoint_3_74',geoSystem=['GDC'],position=(5.297423545807372,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.297423545807372,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca14-8.x3d'],child2Url=['../../tiles/4/Malacca14-9.x3d'],child3Url=['../../tiles/4/Malacca15-8.x3d'],child4Url=['../../tiles/4/Malacca15-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[201,135,182,139,143,115,107,115,95,197,124,151,429,580,268,168,380,258,1038,756,454,392,152,160,167,158,132,112,119,109,146,144,545,252,476,674,254,275,549,215,847,422,587,541,156,206,102,134,216,103,81,109,94,293,221,181,498,334,151,228,348,504,870,840,188,66,162,127,98,145,99,114,213,74,144,241,215,155,155,158,196,164,299,300,744,747,226,33,145,89,105,138,124,81,97,82,107,257,217,241,151,144,145,229,168,298,185,389,369,161,105,106,191,153,217,138,77,85,112,153,300,261,145,141,155,445,187,143,162,321,168,55,95,96,194,112,94,633,92,121,134,525,269,156,257,145,203,333,262,160,255,402,26,8,106,86,224,84,77,258,82,118,233,711,466,515,227,173,447,247,302,202,163,100,41,19,111,87,456,113,72,64,150,269,236,375,396,422,184,660,254,154,193,162,302,62,27,28,90,101,453,152,73,118,493,664,608,530,342,276,162,461,155,199,246,99,73,30,22,18,85,122,190,143,272,367,388,1113,731,475,391,291,306,198,154,343,204,91,69,63,26,36,191,247,182,137,68,318,413,495,450,370,346,327,905,155,451,351,384,306,114,372,45,23,154,201,77,61,48,154,148,855,330,434,546,511,504,209,530,373,104,206,82,22,35,16,141,141,119,126,61,99,230,436,383,407,445,543,667,216,319,622,76,69,256,24,48,15,167,224,233,105,65,87,376,531,371,378,554,526,720,280,301,478,155,52,159,24,10,12,122,215,83,43,180,112,420,632,573,613,675,833,761,185,407,617,183,93,25,52,20,52,192,435,189,38,141,190,868,658,420,282,438,1114,731,392,125,107,34,34,52,28,26,78,213,360,129,60,243,159,635,701,149,142,170,781,516,349,190,86,46,36,42,14,28,72,185,171,60,63,415,190,578,449,110,80,244,1013,725,310,57,77,126,32,33,20,13,79,162,72,34,104,158,409,589,963,63,59,356,1107,473,117,40,53,94,49,20,12,21,21,150,51,39,151,51,377,413,643,85,47,120,675,547,312,29,41,63,16,13,11,16,9,174,53,46,183,62,337,391,696,76,52,117,677,575,353,24,31,64,19,14,8,18,12],
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
