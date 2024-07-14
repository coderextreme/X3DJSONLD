export VERSION="$1"
python ../python/etgenerateJSONschema2020-12.py "$VERSION" < "../../specifications/X3dUnifiedObjectModel-${VERSION}.xml" | tee "../schema/x3d-${VERSION}-debug.json" | jsonlint > "../schema/x3d-${VERSION}-JSONSchema.json"
