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
    meta(content='WinterPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WinterPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248649,diffuseColor=(0.986486,1.0,1.0),shininess=0.524324,specularColor=(0.405259,0.410811,0.410811))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.230089,diffuseColor=(0.610811,0.610811,0.610811),shininess=0.897297,specularColor=(0.767568,0.756757,0.764964))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.236842,diffuseColor=(0.205405,0.205405,0.205405),shininess=1.0,specularColor=(0.686486,0.676818,0.684159))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254237,diffuseColor=(0.240246,0.261598,0.357576),shininess=0.072727,specularColor=(0.220301,0.259507,0.290909))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254237,diffuseColor=(0.141299,0.145507,0.164421),shininess=0.072727,specularColor=(0.394707,0.464951,0.521212))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.081633,specularColor=(0.293243,0.297387,0.290421))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter06',
      #  computed conversion ambientIntensity=2.226234, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.331633,0.296582,0.279057),shininess=0.096939,specularColor=(0.311224,0.25183,0.133042))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(1.0,1.0,0.474361),shininess=0.037838)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(1.0,1.0,0.0),shininess=0.681081,specularColor=(0.899871,0.893105,0.896821))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(0.579759,1.0,0.474361),shininess=1.0,specularColor=(0.809524,0.0,1.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(0.0,0.309524,0.0),shininess=0.081081,specularColor=(0.071925,0.677294,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.355876,diffuseColor=(0.0,0.488636,0.0),shininess=0.0)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.081081,specularColor=(0.071925,0.356628,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.789189,specularColor=(0.081633,0.404762,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.081081,specularColor=(0.356628,0.356628,0.356628))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.724324,specularColor=(0.87027,0.458816,0.87027))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.059538,0.070134,0.211314),shininess=1.0,specularColor=(0.084549,0.099595,0.111647))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.24812,diffuseColor=(0.082709,0.067989,0.348453),shininess=0.684848,specularColor=(0.656314,0.773115,0.866667))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251799,diffuseColor=(0.442456,0.506497,0.842424),shininess=0.524324,specularColor=(0.405259,0.410811,0.410811))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251799,diffuseColor=(0.23888,0.41719,0.842424),shininess=0.524324,specularColor=(0.405259,0.410811,0.410811))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.434323,0.695804,0.788544),shininess=0.094483,specularColor=(0.061688,0.098828,0.112))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.015119,0.331798,0.399133),shininess=0.772973,specularColor=(0.017084,0.374932,0.451021))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.015119,0.331798,0.399133),shininess=0.097297,specularColor=(0.004385,0.096221,0.115749))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.242424,diffuseColor=(0.030858,0.393852,0.522917),shininess=0.097297,specularColor=(0.013774,0.302289,0.363636))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248648,diffuseColor=(0.972789,0.619048,0.705085),shininess=0.832432,specularColor=(0.610811,0.35315,0.373056))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248648,diffuseColor=(0.936975,0.092326,0.42843),shininess=0.832432,specularColor=(0.805292,0.216986,0.36733))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254054,diffuseColor=(0.738397,0.092326,0.361345),shininess=0.151351,specularColor=(0.526732,0.141928,0.240266))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.266839,diffuseColor=(0.230477,0.106718,0.285207),shininess=0.054054,specularColor=(0.551351,0.0,0.234225))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.266839,diffuseColor=(0.230477,0.106718,0.285207),shininess=0.740541,specularColor=(0.848649,0.0,0.360523))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.267858,diffuseColor=(0.244615,0.113264,0.302703),shininess=0.659459,specularColor=(0.690166,0.319568,0.854054))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.267858,diffuseColor=(0.244615,0.113264,0.302703),shininess=0.07027,specularColor=(0.253352,0.11731,0.313514))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.266839,diffuseColor=(0.285207,0.0,0.0),shininess=0.097297,specularColor=(0.110903,0.0,0.337957))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.266839,diffuseColor=(0.285207,0.0,0.0),shininess=0.740541,specularColor=(0.150101,0.0,0.457407))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.540541,0.0,0.0),shininess=0.064865,specularColor=(0.092002,0.0,0.020119))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Winter34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.540541,0.0,0.0),shininess=0.772973,specularColor=(0.577569,0.0,0.126303))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["WinterExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterExamples.x3d","WinterExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/WinterExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["WinterExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","WinterExamples.x3d"],
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

print ("python x3d.py load successful for WinterPrototypes.py")
