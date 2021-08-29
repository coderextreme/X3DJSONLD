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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='MetalsPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MetalsPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.218111,0.0),shininess=0.660606,specularColor=(1.0,0.887979,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.218111,0.0),shininess=0.132653,specularColor=(0.729592,0.647862,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.268293,diffuseColor=(0.49697,0.344891,0.0),shininess=0.927273,specularColor=(1.0,0.887978,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.218111,0.0),shininess=0.030612,specularColor=(0.540816,0.480233,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.938776,0.055032,0.055032))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.976208,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0.0),shininess=0.357143,specularColor=(0.780612,0.691177,0.397036))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240001,diffuseColor=(0.454545,0.107552,0.0),shininess=0.927273,specularColor=(0.951515,0.729659,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0.0),shininess=0.107143,specularColor=(0.780612,0.598604,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0.0),shininess=0.048485,specularColor=(1.0,0.766841,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0.0),shininess=0.040816,specularColor=(0.760204,0.582954,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0.0),shininess=0.107143,specularColor=(0.780612,0.691177,0.397036))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0.0),shininess=0.163265,specularColor=(0.714286,0.696627,0.55665))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0.0),shininess=0.204082,specularColor=(0.882653,0.860832,0.687861))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.315152,0.07457,0.0),shininess=0.036364,specularColor=(0.508861,0.684007,0.326263))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.384722,0.266993,0.0),shininess=0.066667,specularColor=(0.757576,0.738847,0.590386))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0.0),shininess=0.020408,specularColor=(0.678571,0.661796,0.528818))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.651044,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.557576,specularColor=(1.0,0.991559,0.963793))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.081104,0.0,0.079592),shininess=0.654545,specularColor=(0.963636,0.955501,0.928746))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.249999,diffuseColor=(0.0,0.0,0.04254),shininess=0.102041,specularColor=(0.632653,0.627312,0.609747))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.249999,diffuseColor=(0.0,0.0,0.04254),shininess=0.056122,specularColor=(0.632653,0.627312,0.609747))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.249999,diffuseColor=(0.0,0.0,0.04254),shininess=0.056122,specularColor=(0.821429,0.814494,0.791687))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.155308,0.150902,0.151742),shininess=0.102041,specularColor=(0.528268,0.524391,0.524455))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.44898,0.445189,0.432723))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.102041,specularColor=(0.780612,0.774022,0.752349))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal27',
      #  computed conversion ambientIntensity=1.261905, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.557827,0.571796,0.571797),shininess=0.236364,specularColor=(0.708205,0.480594,0.458724))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal28',
      #  computed conversion ambientIntensity=1.959996, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.412673,0.455048,0.472727),shininess=0.127273,specularColor=(0.420602,0.431402,0.454545))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.234375,diffuseColor=(0.566681,0.580872,0.580874),shininess=0.168182,specularColor=(0.673937,0.45734,0.436528))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.372322,0.371574,0.373173),shininess=0.127551,specularColor=(0.890909,0.887832,0.890909))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.372322,0.371574,0.373173),shininess=0.127551,specularColor=(0.556122,0.554201,0.556122))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.113208,diffuseColor=(0.697737,0.696336,0.699331),shininess=1.0,specularColor=(0.227785,0.227345,0.227393))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.625,diffuseColor=(0.4,0.4,0.4),shininess=0.6,specularColor=(0.774597,0.774597,0.774597))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.833333,diffuseColor=(0.2775,0.2775,0.2775),shininess=0.7,specularColor=(0.773911,0.773911,0.773911))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["MetalsExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsExamples.x3d","MetalsExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["NeonExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","NeonExamples.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MetalsPrototypes.py")
