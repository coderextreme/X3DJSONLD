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
    meta(content='NeonPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NeonPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.398733,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.628573,1.0),shininess=0.05102,specularColor=(0.47027,0.47027,0.47027))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.018841,0.940276,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,1.0,0.734243),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,1.0,0.456346),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,1.0,0.168349),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.023906,1.0,0.00239),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.363921,1.0,0.0478),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.559606,1.0,0.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.757687,1.0,0.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.871763,0.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.7155,0.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.577069,0.0),shininess=0.054054,specularColor=(0.383784,0.383784,0.383784))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.442751,0.0),shininess=0.05102,specularColor=(0.475676,0.475676,0.475676))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.318894,0.0),shininess=0.086486,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.151505,0.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,0.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,0.080733),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,0.265757),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,0.34678),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.079082,0.656922),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.934028,0.003043,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.755836,0.0,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.58832,0.017294,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.460235,0.0,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.17496,0.0,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.135953,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.277276,1.0),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.2805,0.39661),shininess=0.081081,specularColor=(0.616216,0.616216,0.616216))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.2805,0.040678),shininess=0.081081,specularColor=(0.616216,0.616216,0.616216))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.921769,0.544218,0.0),shininess=0.054054,specularColor=(0.637764,0.37654,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.286509,0.159322),shininess=0.054054,specularColor=(0.535135,0.535135,0.535135))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.667797,0.076966,0.171099),shininess=0.054054,specularColor=(0.497297,0.497297,0.497297))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.59083,0.058279,0.307405),shininess=0.075676,specularColor=(0.6,0.6,0.6))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.595346,0.187689,0.595358),shininess=0.054054,specularColor=(0.47027,0.47027,0.47027))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["NeonExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonExamples.x3d","NeonExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonExamples.wrl"],
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

print ("python x3d.py load successful for NeonPrototypes.py")
