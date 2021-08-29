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
    GeoViewpoint(description='GeoViewpoint_3_71',geoSystem=['GDC'],position=(27.130324311166753,55.57839916841148,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.130324311166753,55.57839916841148,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small14-2.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small14-3.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small15-2.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small15-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[356,333,482,573,629,190,284,115,122,124,121,99,88,75,13,-2,-1,6,-1,3,0,1,551,660,608,847,381,384,332,250,321,295,178,145,175,328,131,45,21,2,8,7,3,2,536,626,914,461,358,405,375,307,259,290,250,230,377,544,257,105,35,16,16,6,8,13,711,661,513,515,477,447,454,549,456,409,345,349,782,746,359,167,102,43,33,27,19,16,684,729,650,596,583,805,793,654,639,770,755,869,852,748,588,283,335,164,56,54,24,23,851,924,907,1078,1041,790,422,364,418,405,523,621,610,740,654,550,436,326,129,77,33,32,1142,1312,1043,941,882,768,311,554,544,582,292,299,635,812,757,815,752,593,199,356,344,376,1282,1175,866,760,481,329,281,273,451,300,237,249,560,845,826,951,1015,695,392,224,604,616,975,935,649,491,231,248,224,236,207,210,242,339,347,612,759,854,1038,908,599,471,460,422,780,632,573,301,190,196,178,206,211,192,220,218,336,396,676,661,909,815,806,629,538,522,789,485,228,200,168,180,185,186,162,168,223,186,190,225,292,545,714,746,561,529,460,436,399,306,248,192,130,119,171,146,139,203,337,213,163,165,204,317,448,572,287,322,252,242,244,165,191,158,106,100,131,107,142,315,381,480,255,174,159,186,162,219,114,73,79,90,183,156,145,163,115,73,108,124,491,298,351,353,366,227,144,305,194,153,69,48,25,23,192,123,103,99,125,86,370,357,413,428,384,463,405,343,320,175,107,28,21,25,13,14,124,118,90,90,98,76,173,196,161,205,309,355,301,260,161,71,33,22,15,15,12,12,107,91,99,99,116,139,125,140,144,106,110,154,145,116,57,37,26,22,17,10,13,14,127,101,117,362,238,167,138,113,78,60,51,54,57,46,38,27,26,21,15,16,14,13,101,110,144,433,270,227,144,98,75,50,42,42,39,40,33,26,21,16,17,16,16,16,131,127,196,478,349,209,135,90,72,56,45,38,33,30,30,24,21,22,22,19,16,16,170,150,268,397,282,198,118,101,72,55,42,37,33,31,28,26,28,26,29,25,21,20,172,149,276,414,272,193,117,101,72,55,41,38,33,30,29,26,29,27,29,25,21,21],
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
